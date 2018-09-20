# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hebadi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 17:34:13 by hebadi            #+#    #+#              #
#    Updated: 2018/09/19 16:44:49 by hebadi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = *.c

OUT = *.o

INCLUDES = *.h

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)


all: $(NAME)

clean:
	rm $(OUT) 

fclean:	clean	
	rm -f $(NAME)

re:	fclean	all
