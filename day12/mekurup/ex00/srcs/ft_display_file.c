/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:34:40 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/25 18:35:56 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ex00.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 10

int		manip(char *filename)
{
	int		fd;
	int		ret;
	char	buff[BUF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	if (fd == 1)
	{
		ft_putstr("Error");
		return (1);
	}
	while ((ret = read(fd, buff, BUF_SIZE)))
	{
		buff[ret] = '\0';
		ft_putstr(buff);
	}
	if (close(fd) == -1)
	{
		ft_putstr("Error");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*filename;
	int		fp;

	if (argc > 0)
	{
		if (argc == 1)
			ft_putstr("File name missing.");
		if (argc > 2)
			ft_putstr("Too many arguments.");
		if (argc == 2)
		{
			filename = argv[1];
			fp = manip(filename);
			if (fp == 1)
				return (1);
			if (fp == 0)
				return (0);
		}
	}
	return (0);
}
