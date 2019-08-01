/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:47:42 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/25 21:49:07 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "ftpr.h"
#define BUFF_SIZE 1026

void	manip(int argc, char **argv)
{
	int 	i;
	int		fd;
	int		ret;
	int		er;
	int		errno;
	char	buff[BUFF_SIZE + 1];

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ft_putnbr(fd);
		if (fd < 0)
		{
			ft_putnbr(fd);
			write(2, "cat: ", 5);
			write(2, argv[i], ft_strlen(argv[i]));
			er = errno;
			if (er == 21)
				write(2, ": Is a directory\n", 17);
			if (er == 2)
				write(2, ": No such file or directory\n", 28);
			continue;
		}
		while ((ret = read(fd, buff, BUFF_SIZE - 1)))
		{
			buff[ret] = '\0';
			ft_putstr(buff);
		}
		if (close(fd) == -1)
		{
			er = errno;
			ft_putnbr(er);
			return ;
		}
		return ;
	}
}
void	looping(void)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	while (1)
	{
		ret = read(1, buff, BUFF_SIZE);
		buff[ret] = '\0';
		if (ret == 0)
			break ;
		ft_putstr(buff);
	}
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		if (argc == 1)
		{
			looping();
		}
		if (argc >= 2)
		{
			manip(argc, argv);
		}
	}
	return (0);
}
