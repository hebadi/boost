/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:19:19 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/19 18:11:43 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#define LINE printf("\n")

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (write(1, str, i));
}

int		ft_putnbr(int nb)
{
	char	converted;
	int		sum;

	sum = 0;
	converted = nb + '0';
	if (nb < 0)
	{
		nb = nb * (-1);
		sum += ft_putchar('-');
		sum += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		sum += ft_putnbr(nb / 10);
		sum += ft_putnbr(nb % 10);
	}
	else
		sum += ft_putchar(converted);
	return (sum);
}


int		b_printf(const char *restrict format, ...)
{
	int i;
	va_list args; // creates a variable of type va_list called "args"
	int sum;

	va_start(args, str);	//this va_starts is a macro which takes a va_list variable, and the variable preceding the ellipsis ("...")
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\"')
			i++;
		else if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd')
			{
				int nb = va_arg(args, int); //va_arg takes two arguments, the va_list variable, and a data type that the function will return. i.e. returns the next variable in the list of watever variable type it is told to take. it then moves down the list to the next argument
				sum += ft_putnbr(nb);
			}
			if (str[i] == 'c')
			{
				int c = va_arg(args, int);
				sum += ft_putchar((char)c);
			}
			if (str[i] == 's')
			{
				char *string = va_arg(args, char *);
				sum += ft_putstr(string);
			}
			if (str[i] == 'f')
			{
				double d = va_arg(args, double);
				printf("%f", d);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args); //this cleans up the variable arguement list
	return (sum);
}

int		main(int argc, char **argv)
{
	b_printf("hello %d, %d", 5899, 123);
	LINE;
	b_printf("world %f", 5.899);
	LINE;
	b_printf("hello %s", argv[1]);
	LINE;

	return (5);
}
