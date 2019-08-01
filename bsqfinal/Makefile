# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee <slee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 15:10:01 by ayezhova          #+#    #+#              #
#    Updated: 2019/07/31 13:43:38 by mekurup          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC =srcs/main.c srcs/ft_atoi.c srcs/get_string.c srcs/ft_list_push_back.c srcs/perform_bsq.c \
	  srcs/make_list.c srcs/test_for_rec.c

HDR = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -I $(HDR) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

re: clean all
