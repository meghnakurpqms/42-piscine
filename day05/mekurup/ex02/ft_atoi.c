/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:05:57 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/16 16:53:20 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		pm(char *str, int i)
{
	if (str[i] == '-' || str[i] == '+')
		return (1);
	else
		return (0);
}

int		spec(char c)
{
	int ifspcl;

	ifspcl = 0;
	if (c >= 0 && c <= 42)
		ifspcl = 1;
	if (c >= 58 && c <= 127)
		ifspcl = 1;
	if (c == 46 || c == 47 || c == 44)
		ifspcl = 1;
	if (c == '\t' || c == ' ' || c == '\n')
		ifspcl = 0;
	if (c == '\r' || c == '\v' || c == '\f')
		ifspcl = 0;
	return (ifspcl);
}

int		isnum(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int atoi;
	int sign;
	int i;

	atoi = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (pm(str, i) && pm(str, (i + 1)))
			return (0);
		else if (pm(str, i) && !pm(str, (i + 1)) && (str[i] == '-'))
			sign = -1;
		if (spec(str[i]))
			break ;
		if (str[i] >= '0' && str[i] <= '9')
			atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	return (atoi * sign);
}
