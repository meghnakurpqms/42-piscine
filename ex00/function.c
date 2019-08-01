/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:27:06 by zliew             #+#    #+#             */
/*   Updated: 2019/07/21 16:27:51 by zliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *board)
{
	int a;

	a = 0;
	while (a < 9)
	{
		ft_putchar(board[a] + '0');
		if (a < 8)
			ft_putchar(' ');
		a++;
	}
}
