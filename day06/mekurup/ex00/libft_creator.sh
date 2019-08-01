gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a ft*.o
ranlib libft.a
rm -rf *.o
