/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:27:06 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/15 18:21:04 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

char	*create_buffer(unsigned long input, int base)
{
	int				i;
	char			*my_buffer;

	i = 1;
	while ((input /= base) > 0)
		i++;
	my_buffer = (char *)malloc((sizeof(char) * i) + 1);
	my_buffer[i] = '\0';
	return (my_buffer);
}

int		base_convert(unsigned long input, int base)
{
	int		i;
	int		sum;
	char	*buffer;
	char	*possible_values;

	buffer = create_buffer(input, base);
	possible_values = "0123456789abcdef";
	i = 0;
	sum = 0;
	while (input != 0)
	{
		buffer[i] = possible_values[input % base];
		input /= base;
		i++;
	}
	while (i > 0)
	{
		i--;
		sum += ft_putchar(buffer[i]);
	}
	free(buffer);
	return (sum);
}
