/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:41:51 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/05 17:53:09 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle_oct(va_list args)
{
	int				sum;
	unsigned int	h;

	sum = 0;
	h = va_arg(args, unsigned int);
	sum += base_convert(h, 8);
	return (sum);
}
