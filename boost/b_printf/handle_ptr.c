/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:04:14 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/05 19:19:59 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle_ptr(va_list args)
{
	int				sum;
	unsigned long	ptr;

	sum = 0;
	ptr = va_arg(args, unsigned long);
	sum += ft_putstr("0x");
	if (ptr == 0)
		sum += ft_putchar('0');
	else
		sum += base_convert(ptr, 16);
	return (sum);
}
