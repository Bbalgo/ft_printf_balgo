/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsudadec <dsudadec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:56:54 by dsudadec          #+#    #+#             */
/*   Updated: 2023/05/17 03:03:17 by dsudadec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
#define	FT_PRINTF_H
#include	"stdarg.h"
#include	"stdio.h"
#include	"unistd.h"

int	ft_printf(const char *format, ...);
int	ft_format(const char c, va_list args);
int	ft_putchar(char c);
int	ft_strlen(char *s);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_uint(unsigned int n);
int	ft_pointer(unsigned long long p);
int	ft_xlow(unsigned long long x);
int	ft_xup(unsigned long long X);

#endif
