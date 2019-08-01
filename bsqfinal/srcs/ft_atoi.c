/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:24:08 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/16 17:33:58 by ayezhova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v')
		return (1);
	else if (c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int val;
	int i;
	int sign;

	val = 0;
	i = 0;
	sign = 1;
	while (whitespace(str[i]))
		i++;
	if ((int)str[i] == 45 || (int)str[i] == 43)
	{
		if ((int)str[i] == 45)
			sign = -1;
		i++;
	}
	while ((int)str[i] >= 48 && (int)str[i] <= 57)
	{
		val = val * 10 + (int)str[i] - 48;
		i++;
	}
	return (val * sign);
}
