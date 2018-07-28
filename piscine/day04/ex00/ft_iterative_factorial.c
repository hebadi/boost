/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:09:33 by hebadi            #+#    #+#             */
/*   Updated: 2018/07/28 15:04:46 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}
