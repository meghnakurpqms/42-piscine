/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:56:01 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/23 17:56:06 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		ft_div(int a, int b);
int		ft_mul(int a, int b);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mod(int a, int b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	else if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		operation(char *op)
{
	int i;

	i = -1;
	if (op[1] != '\0')
		return (-1);
	if (op[0] == '+' && op[1] == '\0')
		i = 0;
	if (op[0] == '-' && op[1] == '\0')
		i = 1;
	if (op[0] == '*' && op[1] == '\0')
		i = 2;
	if (op[0] == '/' && op[1] == '\0')
		i = 3;
	if (op[0] == '%' && op[1] == '\0')
		i = 4;
	return (i);
}

void	calculate(int a, int b, int opval)
{
	int res;

	if (opval == 0)
		ft_putnbr(ft_add(a, b));
	if (opval == 1)
		ft_putnbr(ft_sub(a, b));
	if (opval == 2)
		ft_putnbr(ft_mul(a, b));
	if (opval == 3)
	{
		res = ft_div(a, b);
		if (res == -1)
			write(1, "Stop : division by zero\n", 24);
		else
			ft_putnbr(res);
	}
	if (opval == 4)
	{
		res = ft_mod(a, b);
		if (res == -1)
			write(1, "Stop : modulo by zero\n", 24);
		else
			ft_putnbr(res);
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*op;
	int		opval;

	if (argc == 1)
		return (0);
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = argv[2];
	opval = (operation(op));
	if (opval == -1)
	{
		ft_putchar('0');
		return (0);
	}
	calculate(a, b, opval);
	return (0);
}
