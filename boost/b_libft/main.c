/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:26:15 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/14 18:59:04 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_libft.h"

void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		char str[50] = "GeeksForGeeks is for programming geeks.";
		printf("\nBefore memset(): %s\n", str);
		ft_memset(str + 13, '.', 8*sizeof(char));
		printf("After memset():  %s\n", str);
		printf("After my ft_memset: %s\n", ft_memset(str, 'l', 2*sizeof(char))); 

		int n = 10;
    int arr[n];

    // Fill whole array with 100.
	ft_memset(arr, 0, n * sizeof(arr[n]));
    printf("Array after memset()\n");
    printArray(arr, n);
		
		printf("\narg length = %d\n", ft_strlen(argv[1]));
		printf("\ntoupper = %c\n", ft_toupper('b'));
		printf("\ntolower = %c\n", ft_tolower('D'));
		printf("\nft_isdigit = %d\n", ft_isdigit(8));
		printf("\nft_strcmp = %d\n", ft_strcmp("hello", "world"));
		printf("\nft_strchr = %c\n", *ft_strchr("hello", '\0'));
		char strr[6] = "world";
		printf("\nft_strchr = %s\n", ft_strncpy(strr, "hello", 3));
		//printf("\nft_strchr = %c\n", *strchr("hello", '\0'));

	}
	LINE;
	return (0);
}
