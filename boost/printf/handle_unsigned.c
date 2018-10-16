/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:49:57 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/03 20:53:38 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle_unsigned(va_list args)
{
	unsigned int	h;

	h = va_arg(args, unsigned int);
	return (ft_putunsignednbr(h));
}
