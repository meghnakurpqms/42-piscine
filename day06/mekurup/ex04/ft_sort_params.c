/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 17:47:16 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/17 17:58:49 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if ((s1[i] - s2[j]) != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

void	printing(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = argc - 1;
	if (argc > 0)
	{
		while (i > 1)
		{
			j = argc - 1;
			while (j > 1)
			{
				if (ft_strcmp(argv[j - 1], argv[j]) > 0)
				{
					temp = argv[j];
					argv[j] = argv[j - 1];
					argv[j - 1] = temp;
				}
				j--;
			}
			i--;
		}
	}
	printing(argc, argv);
}
