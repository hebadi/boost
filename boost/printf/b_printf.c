/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:19:19 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/03 19:24:50 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		b_printf(const char *format, ...)
{
	int				sum;
	int				i;
	va_list			args;

	sum = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == ' ')
				sum += ft_putchar(format[i]);
			while (format[i] == ' ')
				i++;
			sum += handler(format, args, i);
		}
		else
			sum += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (sum);
}
