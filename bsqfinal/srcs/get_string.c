/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:29:26 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/30 16:24:54 by ayezhova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#define BUF_SIZE 100

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		get_count(t_list *list)
{
	int		count;

	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}

char	*make_one(char *str, t_list *list)
{
	int		j;
	int		i;
	char	temp_str[BUF_SIZE + 1];
	t_list	*temp;

	str = (char*)malloc((sizeof(*str) * get_count(list) * BUF_SIZE + 1));
	j = 0;
	while (list)
	{
		ft_strcpy(temp_str, list->data);
		i = 0;
		while (temp_str[i] != '\0')
		{
			str[j] = temp_str[i];
			i++;
			j++;
		}
		temp = list;
		list = list->next;
		free(temp);
	}
	list = NULL;
	str[j] = '\0';
	return (str);
}

char	*get_string(int ar, char *av)
{
	char	*str;
	t_list	*list;

	list = NULL;
	str = NULL;
	if (ar == 1)
		list = make_list_stdin(list);
	else
		list = make_list_arg(list, &av);
	str = make_one(str, list);
	return (str);
}
