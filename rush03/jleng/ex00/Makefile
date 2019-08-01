# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mekurup <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 20:41:24 by mekurup           #+#    #+#              #
#    Updated: 2019/07/28 20:41:28 by mekurup          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=colle-2
SRCS=srcs/*.c
HEADERS_FOLDER=includes

all: comp_lib
	
comp_lib:
	gcc -Wall -Wextra -Werror -o $(NAME) -I$(HEADERS_FOLDER) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
