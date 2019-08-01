/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekurup <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:36:13 by mekurup           #+#    #+#             */
/*   Updated: 2019/07/21 17:36:15 by mekurup          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else if ((*s1 == '\0') && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	return (0);
}
