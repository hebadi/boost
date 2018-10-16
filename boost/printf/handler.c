/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:14:14 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/03 18:58:44 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handler(const char *format, va_list args, int i)
{
	int sum;

	sum = 0;
	if (format[i] == '%')
		sum += ft_putchar('%');
	else if (format[i] == 's')
		sum += handle_str(args);
	else if (format[i] == 'c')
		sum += handle_char(args);
	else if (format[i] == 'd')
		sum += handle_int(args);
	else if (format[i] == 'i')
		sum += handle_int(args);
	else if (format[i] == 'p')
		sum += handle_ptr(args);
	else if (format[i] == 'o')
		sum += handle_oct(args);
	else if (format[i] == 'u')
		sum += handle_unsigned(args);
	else if (format[i] == 'x')
		sum += handle_hex(args);
	return (sum);
}
