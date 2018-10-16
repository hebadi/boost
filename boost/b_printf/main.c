/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:56:11 by hebadi            #+#    #+#             */
/*   Updated: 2018/10/15 18:24:21 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_printf.h"
#define TEST "STR [%s] CHAR [%c] DEC [%d] INT [%i] PTR [%p] OCT [%o] UNSIGNED [%u] HEX [%x]\n", "test string\0shouldnotsee", 'a', 42, 42, ptr, 160, -1, -1

int		main(int argc, char **argv)
{
	unsigned int a;

/*	b_printf("my printf: p test %p or %p ", &ptr, ptr);
	printf("real printf: p test %p or %p ", &ptr, ptr);
	b_printf("\"");
	LINE;
	printf("\"");*/
	int *test = NULL;
	int num = INT_MAX;
	int *ptr = &num;
	b_printf(TEST);
	printf(TEST);
	b_printf("~~%p\n", test);
	printf("~~%p\n", test);
	void	*str;
	LINE;
	printf("%p\n", str);
	return (b_printf("%p", str));
}
