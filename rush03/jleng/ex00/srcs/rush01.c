/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:06:12 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 21:11:59 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char	*rush01(int x, int y)
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
		if (i / x == 0 || i / x == (y - 1) || i % x == 0 || i % x == (x - 1))
			ch = '*';
		if (i == 0 || i == x * y - 1)
			ch = '/';
		if ((i == (x - 1) || i == x * y - x) && i != 0)
			ch = '\\';
		str[idx++] = (ch);
		if (i % x == (x - 1))
			str[idx++] = '\n';
		i++;
	}
	str[idx++] = '\0';
	return (str);
}
