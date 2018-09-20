/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:19:19 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/19 20:17:04 by hebadi           ###   ########.fr       */
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
	va_list args;
	int sum;

	sum = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '\"')
			i++;
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				ft_putchar('%');
			}
			if (format[i] == ' ')
				i++;
			if (format[i] == 's')
			{
				char *string = va_arg(args, char *);
				if (string == NULL)
					sum += ft_putstr("(null)");
				else
					sum += ft_putstr(string);
			}
			if (format[i] == 'c')
			{
				int c = va_arg(args, int);
				sum += ft_putchar((char)c);
			}
			if (format[i] == 'd')
			{
				int nb = va_arg(args, int);
				sum += ft_putnbr(nb);
			}
			if (format[i] == 'i')
			{
				signed int sdecimal = va_arg(args, signed int);
				printf("%i", sdecimal);
			}
			if (format[i] == 'p')
			{
				void *p = va_arg(args, void *);
				printf("%p", p);
			}
			if (format[i] == 'o')
			{
				unsigned int octal = va_arg(args, unsigned int);
				printf("%o", octal);
			}
			if (format[i] == 'u')
			{
				unsigned int unsigned_decimal= va_arg(args, unsigned int);
				printf("%u", unsigned_decimal);
			}
			if (format[i] == 'x')
			{
				unsigned int hexadecimal = va_arg(args, unsigned int);
				printf("%x", hexadecimal);
			}
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (sum);
}

int		main(int argc, char **argv)
{	int a;

	a = 0x64;
	b_printf("hello %d, %d", 5899, 123);
	LINE;
	b_printf("world %f", 5.899);
	LINE;
	if (argc == 2)
	{
		b_printf("hello %s", argv[1]);
		LINE;
	}
	b_printf("decimal %d, octal %o, hexa %x", a, a, a);
	LINE;
	b_printf("test %%% d\n", 5);
	LINE;
	return (5);
}
