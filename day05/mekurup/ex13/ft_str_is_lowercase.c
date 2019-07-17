/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:29:58 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/15 21:30:11 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		if_special(char c)
{
	int ifspcl;

	ifspcl = 0;
	if (c >= 0 && c <= 96)
		ifspcl = 1;
	else if (c >= 123 && c <= 127)
		ifspcl = 1;
	return (ifspcl);
}

int		ft_str_is_lowercase(char *str)
{
	int i;
	int flag;

	if (str[0] == '\0')
		return (1);
	i = 0;
	flag = 1;
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
