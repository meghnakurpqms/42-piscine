# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mekurup <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 18:58:05 by mekurup           #+#    #+#              #
#    Updated: 2019/07/25 18:58:09 by mekurup          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_cat
SRCS=srcs/*.c
HEADERS_FOLDER=includes

all: comp_lib
	
comp_lib:
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I$(HEADERS_FOLDER)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: clear fclean re
