# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hebadi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 17:34:13 by hebadi            #+#    #+#              #
#    Updated: 2018/09/17 16:56:20 by hebadi           ###   ########.fr        #
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


all: $(NAME)

clean:
	rm $(OUT) 

fclean:	clean	
	rm -f $(NAME)

re:	fclean	all
