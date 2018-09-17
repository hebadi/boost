/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 18:35:57 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/14 19:02:55 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_libft.h"

char	*ft_strdup(const char *s1)
{
	char *cpy;

	cpy = (char *)malloc(ft_strlen(s1) * sizeof(const char));
	return (ft_strcpy(cpy, s1));
}
