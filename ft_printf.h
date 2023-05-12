/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <dsudadec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:56:54 by dsudadec          #+#    #+#             */
/*   Updated: 2023/05/12 12:01:28 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define	FT_PRINTF_H
# include	<stdarg.h>
# include	<stdio.h>
# include	<unistd.h>

int	ft_printf(const char *format, ...);
int	ft_fmt(const char c, va_list args);
int	ft_putchar(char c);
int	ft_strlen(char *s);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_uint(unsigned int n);
int	ft_point(unsigned long p);
int	ft_xlow(unsigned long x);
int	ft_xup(unsigned long X);

#endif
