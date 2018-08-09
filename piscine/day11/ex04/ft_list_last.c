/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 21:26:54 by hebadi            #+#    #+#             */
/*   Updated: 2018/08/08 21:27:05 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	if (!begin_list)
		return (NULL);
	tmp = begin_list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
