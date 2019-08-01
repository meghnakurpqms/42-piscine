/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_for_rec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:07:40 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/31 21:17:26 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		get_row(char *str, int *rec)
{
	int row;
	int i;

	row = 0;
	i = g_size_num + 4;
	while (str[i] != '\n' && str[i] != '\0')
	{
		row++;
		i++;
	}
	rec[1] = row;
	if (row != 0)
		rec[2] = 1;
	else
		rec[2] = 0;
	return (i);
}

void	test_for_rec(char *str, int *rec)
{
	int i;
	int row;

	i = get_row(str, rec);
	rec[0] = 1;
	row = i;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			i++;
		if (str[i] != '\0' && !(str[i + 1] == '\0' && str[i] == '\n'))
			rec[2]++;
		if (str[i] != '\n' && str[i] != '\0')
			row = 0;
		while (str[i] != '\n' && str[i] != '\0')
		{
			i++;
			row++;
		}
		if (row != rec[1])
		{
			rec[0] = 0;
			return ;
		}
	}
}
