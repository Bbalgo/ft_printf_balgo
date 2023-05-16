/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <dsudadec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 01:06:18 by dsudadec          #+#    #+#             */
/*   Updated: 2023/05/17 03:02:10 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if(!s)
		return (ft_putstr("(null)"));
	len = ft_strlen(s);
	while(s[i] && i < len)
	{
		write(1, &(s[i]), 1);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int		len;
	char		c;
	long		nb;

	len = 0;
	nb = (long)n;
	if(nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if(nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		len += ft_putchar(c);
	}
	else
	{
		c = nb + '0';
		len += ft_putchar(c);
	}

	return (len);
}

int	ft_uint(unsigned int n)
{
	int		len;
	char		c;

	len = 0;
	if(n >= 10)
	{
		len += ft_uint(n / 10);
		c = (n % 10) + '0';
		len += ft_putchar(c);
	}
	else
	{
		c = n + '0';
		len += ft_putchar(c);
	}
	return (len);
}

int	ft_pointer(unsigned long long p)
{
	int		len;

	len = 0;
	if(p > 15)
		len += ft_pointer(p / 16);
	if((p % 16) >= 10)
			len += ft_putchar(((p % 16) - 10) + 'a');
	else
			len += ft_putchar((p % 16) + '0');
	return (len);
}
