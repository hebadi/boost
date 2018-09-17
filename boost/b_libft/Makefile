# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hebadi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 17:34:13 by hebadi            #+#    #+#              #
#    Updated: 2018/09/17 16:37:20 by hebadi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

hello:
	echo "ya need to write \"all\" after \"make\""

1: 
	echo 1

22:
	echo 2

333: 1 22
	echo 3



NAME = libft.a

SRCS = *.c

OUT = *.o

INCLUDES = *.h

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

run: 
	gcc -Wall -Wextra -Werror -o program main.c $(NAME) -I $(INCLUDES)

all: $(NAME) run

clean:
	rm $(OUT) 

fclean:	clean	
	rm -f $(NAME)
	rm program

re:	fclean	all
