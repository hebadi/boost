/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:27:39 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/05 19:16:00 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		ft_putnbr(long int nb)
{
	char	converted;
	int		sum;

	sum = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		sum += ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		converted = nb + '0';
		sum += ft_putchar(converted);
	}
	return (sum);
}
