/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:46:32 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/28 13:47:55 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"

int		handle_str(va_list args)
{
	int		sum;
	char	*string;

	sum = 0;
	string = va_arg(args, char *);
	if (string == NULL)
		sum += ft_putstr("(null)");
	else
		sum += ft_putstr(string);
	return (sum);
}
