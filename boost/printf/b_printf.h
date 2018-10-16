/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 12:07:12 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/05 19:17:27 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_PRINTF_H
# define B_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# define LINE b_printf("\n")

int		b_printf(const char *format, ...);

int		handler(const char *format, va_list args, int i);
int		handle_str(va_list args);
int		handle_char(va_list args);
int		handle_int(va_list args);
int		handle_ptr(va_list args);
int		handle_oct(va_list args);
int		handle_unsigned(va_list args);
int		handle_hex(va_list args);

int		base_convert(unsigned long input, int base);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(long int nb);
int		ft_putunsignednbr(unsigned int nb);

#endif
