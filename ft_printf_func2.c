/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <dsudadec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 01:16:46 by dsudadec          #+#    #+#             */
/*   Updated: 2023/05/17 03:02:42 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_xlow(unsigned long long x)
{
	int	len;

	len = 0;
	if (x > 15)
		len += ft_xlow(x / 16);
	if ((x % 16) >= 10)
		len += ft_putchar(((x % 16) - 10) + 'a');
	else
		len += ft_putchar((x % 16) + '0');
	return (len);
}

int	ft_xup(unsigned long long X)
{
	int	len;

	len = 0;
	if (X > 15)
		len += ft_xup(X / 16);
	if ((X % 16) >= 10)
		len += ft_putchar(((X % 16) - 10) + 'A');
	else
		len += ft_putchar((X % 16) + '0');
	return (len);
}
