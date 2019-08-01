/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:29:46 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/31 20:42:32 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		min(int a, int b, int c)
{
	int min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void	perform_bsq(int *map, int rec[3], int *max)
{
	int i;
	int width;

	max[0] = 0;
	max[1] = 0;
	i = rec[2] * (rec[1] + 1) - 1;
	width = (rec[1] + 1);
	while (i >= 0)
	{
		if (map[i] == 1 && (i / width != rec[2] - 1) &&
				(i % width != rec[1] - 1))
		{
			map[i] = min(map[i + 1], map[i + width], map[i + width + 1]) + 1;
		}
		if (max[0] <= map[i])
		{
			max[0] = map[i];
			max[1] = i;
		}
		i--;
	}
}

void	print_finished_array(char *orig, char *symbols, int max[2], int rec[3])
{
	int i;
	int j;
	int width;
	int col_start;
	int row_start;

	i = g_size_num + 4;
	j = 0;
	width = (rec[1] + 1);
	col_start = max[1] % width;
	row_start = max[1] / width;
	while (i < rec[2] * (rec[1] + 1) + g_size_num + 4)
	{
		if (j % width >= col_start && j % width < col_start + max[0] &&
				j / width >= row_start && j / width < row_start + max[0])
			write(1, &symbols[2], 1);
		else
			write(1, &orig[i], 1);
		i++;
		j++;
	}
}

void	print_error(int num)
{
	if (num != 1)
		write(2, "map error\n", 10);
	else
		write(2, "map error", 10);
}
