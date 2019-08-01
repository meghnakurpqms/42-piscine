/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:16:11 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/31 20:43:18 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		map_cpy(int *dest, char *src, char symbols[3])
{
	int i;
	int j;

	i = g_size_num + 4;
	j = 0;
	while (src[i] != '\0')
	{
		if (src[i] == symbols[0])
			dest[j] = 1;
		else if (src[i] == symbols[1])
			dest[j] = 0;
		else if (src[i] == '\n')
			dest[j] = -1;
		else
			return (0);
		i++;
		j++;
	}
	return (1);
}

void	get_symbols(char *orig, char *symbols)
{
	int i;

	i = 0;
	while (orig[i] >= '0' && orig[i] <= '9' && orig[i] != '\0')
	{
		i++;
	}
	g_size_num = i;
	if (orig[i])
		symbols[0] = orig[i];
	if (orig[i + 1])
		symbols[1] = orig[i + 1];
	if (orig[i + 2])
		symbols[2] = orig[i + 2];
	if (orig[i + 3] != '\n')
		symbols[1] = orig[i + 1];
}

int		get_symbols_and_sizes(char *orig, int num)
{
	get_symbols(orig, g_symbols);
	g_rec[0] = 0;
	g_rec[1] = 0;
	g_rec[2] = 0;
	test_for_rec(orig, g_rec);
	if (g_rec[0] == 0 || g_rec[2] != ft_atoi(orig) ||
			g_symbols[0] == g_symbols[1] || g_symbols[0] == g_symbols[2] ||
			g_symbols[1] == g_symbols[2])
	{
		g_err = 1;
		print_error(num);
		return (0);
	}
	return (1);
}

void	run_map(char *orig, int num)
{
	int *map;

	if (g_rec[1] == 0 || g_rec[1] == 0)
	{
		g_err = 1;
		print_error(num);
	}
	else
	{
		map = (int*)malloc(sizeof(*map) * (g_rec[1] + 1) * g_rec[2] + 1);
		if (map_cpy(map, orig, g_symbols))
		{
			perform_bsq(map, g_rec, g_max);
			print_finished_array(orig, g_symbols, g_max, g_rec);
			free(map);
		}
		else
		{
			g_err = 1;
			print_error(num);
		}
	}
}

int		main(int ar, char **av)
{
	int		num_maps;
	char	*orig;
	int		i;

	num_maps = ar - 1;
	if (num_maps == 0)
	{
		orig = get_string(ar, "");
		num_maps++;
	}
	i = 1;
	while (num_maps > 0)
	{
		g_err = 0;
		if (ar > 1)
			orig = get_string(ar, av[i]);
		if (get_symbols_and_sizes(orig, num_maps))
			run_map(orig, num_maps);
		num_maps = num_maps - 1;
		if (num_maps != 0 && !g_err)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
