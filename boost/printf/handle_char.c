/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:43:58 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/28 13:55:51 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle_char(va_list args)
{
	int	sum;
	int	c;

	sum = 0;
	c = va_arg(args, int);
	sum += ft_putchar((char)c);
	return (sum);
}
