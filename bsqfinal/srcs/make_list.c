/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:12:58 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/30 16:15:28 by ayezhova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 100

t_list	*make_list_stdin(t_list *list)
{
	int		n;
	char	*str;

	n = 0;
	str = (char*)malloc((sizeof(*str) * BUF_SIZE + 1));
	while ((n = read(STDIN_FILENO, str, BUF_SIZE)) > 0)
	{
		str[n] = '\0';
		ft_list_push_back(&list, str);
		str = (char*)malloc((sizeof(*str) * BUF_SIZE + 1));
	}
	return (list);
}

t_list	*make_list_arg(t_list *list, char **av)
{
	int		n;
	char	*str;
	int		fd;

	n = 0;
	if ((fd = open(*av, O_RDONLY)))
	{
		str = (char*)malloc((sizeof(*str) * BUF_SIZE + 1));
		while ((n = read(fd, str, BUF_SIZE)) > 0)
		{
			str[n] = '\0';
			ft_list_push_back(&list, str);
			str = (char*)malloc((sizeof(*str) * BUF_SIZE + 1));
		}
	}
	fd = close(fd);
	return (list);
}
