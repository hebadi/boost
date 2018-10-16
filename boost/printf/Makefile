# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hebadi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 17:34:13 by hebadi            #+#    #+#              #
#    Updated: 2018/10/05 20:01:19 by hebadi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_putstr.c\
ft_putunsignednbr.c\
ft_putnbr.c\
ft_putchar.c\
base_convert.c\
b_printf.c\
handler.c\
handle_ptr.c\
handle_int.c\
handle_str.c\
handle_unsigned.c\
handle_char.c\
handle_hex.c\
handle_oct.c\

OBJ = $(SRCS:.c=.o)

INCLUDES = *.h

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean:	clean	
	rm -f $(NAME)

re:	fclean	all
