/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getrush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:15:52 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 21:40:10 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

int		getx(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\n')
			return (x);
		x++;
	}
	return (0);
}

int		gety(char *str)
{
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

void	printingrush(char *str, int x, int y, int *isnotprint)
{
	if (*isnotprint == 0)
		ft_putstr(" || ");
	ft_putstr("[");
	ft_putstr(str);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	*isnotprint = 0;
}

void	compare(char *str)
{
	int	x;
	int	y;
	int	isnotprint;

	x = getx(str);
	y = gety(str);
	isnotprint = 1;
	if (x > 0 && y > 0)
	{
		if (ft_strcmp(str, rush00(x, y)) == 0)
			printingrush("rush-00", x, y, &isnotprint);
		if (ft_strcmp(str, rush01(x, y)) == 0)
			printingrush("rush-01", x, y, &isnotprint);
		if (ft_strcmp(str, rush02(x, y)) == 0)
			printingrush("rush-02", x, y, &isnotprint);
		if (ft_strcmp(str, rush03(x, y)) == 0)
			printingrush("rush-03", x, y, &isnotprint);
		if (ft_strcmp(str, rush04(x, y)) == 0 || ((ft_strcmp(&str[0],
							&rush04(x, y)[0])) && (x == 1) && (y == 1)))
			printingrush("rush-04", x, y, &isnotprint);
	}
	if (isnotprint)
		ft_putstr("aucune\n");
	else
		ft_putchar('\n');
}
