/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 21:40:57 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/28 21:41:47 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H
# define FT_COLLE_H
# define BUFF_SIZE 4096
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strcat(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	compare(char *str);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
#endif
