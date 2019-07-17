/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:41:45 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/15 20:43:33 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		if_special(char c)
{
	int ifspcl;

	ifspcl = 0;
	if (c >= 32 && c <= 47)
		ifspcl = 1;
	else if (c >= 58 && c <= 64)
		ifspcl = 1;
	else if (c >= 91 && c <= 96)
		ifspcl = 1;
	else if (c >= 123 && c <= 127)
		ifspcl = 1;
	return (ifspcl);
}

int		is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 'z' - 'Z';
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - ('z' - 'Z');
	i = 1;
	while (str[i] != '\0')
	{
		if (if_special(str[i - 1]) && is_alpha(str[i]))
		{
			str[i] = str[i] - ('z' - 'Z');
		}
		i++;
	}
	return (str);
}
