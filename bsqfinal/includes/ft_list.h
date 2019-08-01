/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayezhova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 18:55:08 by ayezhova          #+#    #+#             */
/*   Updated: 2019/07/30 16:41:00 by ayezhova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>

# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int					g_size_num;

int					g_rec[3];

char				g_symbols[3];

int					g_max[2];

int					g_err;

void				print_error(int num);

void				ft_list_push_back(t_list **begin_list, void *data);

t_list				*ft_create_elem(void *data);

char				*get_string(int ar, char *av);

void				perform_bsq(int *map, int rec[3], int *max);

void				print_finished_array(char *orig, char *symbols, int max[2],
					int rec[3]);

int					ft_atoi(char *str);

t_list				*make_list_stdin(t_list *list);

t_list				*make_list_arg(t_list *list, char **av);

void				test_for_rec(char *str, int *rec);

#endif
