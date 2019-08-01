# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mekurup <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 18:21:38 by mekurup           #+#    #+#              #
#    Updated: 2019/07/23 18:21:42 by mekurup          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=do-op
SRCS=srcs/ft_div.c srcs/ft_mul.c srcs/ft_add.c srcs/ft_sub.c srcs/ft_mod.c srcs/do_op.c srcs/ft_atoi.c

all: comp_lib
	
comp_lib:
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)
	
clean:
	/bin/rm -f do-op

re: clean all
