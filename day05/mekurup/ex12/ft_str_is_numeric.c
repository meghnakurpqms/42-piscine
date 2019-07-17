/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:19:21 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/15 21:19:29 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		if_special(char c)
{
	int ifspcl;

	ifspcl = 0;
	if (c >= 0 && c <= 47)
		ifspcl = 1;
	else if (c >= 58 && c <= 127)
		ifspcl = 1;
	return (ifspcl);
}

int		ft_str_is_numeric(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (if_special(str[i]))
		{
			flag = 0;
			break ;
		}
		i++;
	}
	return (flag);
}
