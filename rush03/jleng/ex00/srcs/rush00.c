/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:12:10 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 21:14:24 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*rush00(int x, int y)
{
	int		i;
	char	*variants;
	int		character_idx;
	char	*str;
	int		idx;

	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * y + 1))))
		return (NULL);
	i = 0;
	idx = 0;
	variants = " -|o";
	while (i < x * y)
	{
		character_idx = 0;
		if (i / x == 0 || i / x == y - 1)
			character_idx += 1;
		if (i % x == 0 || i % x == x - 1)
			character_idx += 2;
		str[idx++] = (variants[character_idx]);
		if (i % x == x - 1)
			str[idx++] = '\n';
		i++;
	}
	str[idx] = '\0';
	return (str);
}
