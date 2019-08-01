/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:14:47 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 21:17:16 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*rush02(int x, int y)
{
	int		i;
	int		ch;
	char	*str;
	int		idx;

	i = 0;
	idx = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * y + 1))))
		return (NULL);
	while (i < x * y)
	{
		ch = ' ';
		if (i / x == 0 || i / x == y - 1 || i % x == 0 || i % x == x - 1)
			ch = 'B';
		if (i == 0 || i == x - 1)
			ch = 'A';
		if ((i == x * y - x || i == x * y - 1) && i >= x)
			ch = 'C';
		str[idx++] = ch;
		if (i % x == x - 1)
			str[idx++] = '\n';
		i++;
	}
	str[idx] = '\0';
	return (str);
}
