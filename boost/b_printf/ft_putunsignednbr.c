/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:28:32 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/05 22:10:00 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		ft_putunsignednbr(unsigned int nb)
{
	int		sum;
	char	converted;

	sum = 0;
	if (nb > 9)
	{
		ft_putunsignednbr(nb / 10);
		ft_putunsignednbr(nb % 10);
	}
	else
	{
		converted = nb + '0';
		sum += ft_putchar(converted);
	}
	return (sum);
}
