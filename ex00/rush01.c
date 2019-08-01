/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 21:43:16 by zliew             #+#    #+#             */
/*   Updated: 2019/07/21 18:14:45 by zliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(int *board);

void	given_num(char *arg[], int *board[])
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (arg[row + 1][col] > '0' && arg[row + 1][col] <= '9')
				board[row][col] = arg[row + 1][col] - 48;
			else
				board[row][col] = 0;
			col++;
		}
		row++;
	}
}

int		validate(int *board[], int row, int col, int value)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 9)
	{
		if ((board[row][x] == value) || (board[x][col] == value))
			return (0);
		x++;
	}
	x = 0;
	while (x < 3)
	{
		while (y < 3)
		{
			if (board[row - (row % 3) + x][col - (col % 3) + y] == value)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int		solve(int *board[], int row, int col, int value)
{
	value = 1;
	if (row >= 8 && col >= 8 && board[8][8] != 0)
		return (1);
	if (col > 8)
	{
		row++;
		col = 0;
	}
	if (board[row][col] != 0)
		return (solve(board, row, col + 1, value));
	while (value <= 9)
	{
		if (validate(board, row, col, value))
		{
			board[row][col] = value;
			if ((row >= 8 && col >= 8) || solve(board, row, col + 1, value))
				return (1);
		}
		value++;
	}
	return ((board[row][col] = 0));
}

void	end(int *board[])
{
	int a;

	a = 0;
	if (solve(board, 0, 0, 1))
	{
		while (a < 9)
		{
			ft_putstr(board[a]);
			ft_putchar('\n');
			a++;
		}
	}
	else
		write(1, "Error\n", 6);
}

int		main(int argc, char **argv)
{
	int row;
	int **board;

	row = 0;
	board = malloc(sizeof(int*) * 9);
	while (row < 9)
	{
		board[row] = malloc(sizeof(int) * 9);
		row++;
	}
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	given_num(argv, board);
	end(board);
	return (0);
}
