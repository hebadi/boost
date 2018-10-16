/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 12:28:26 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/05 17:52:22 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle_hex(va_list args)
{
	int				sum;
	unsigned int	h;

	sum = 0;
	h = va_arg(args, unsigned int);
	sum += base_convert(h, 16);
	return (sum);
}
