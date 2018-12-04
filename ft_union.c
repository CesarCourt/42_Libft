/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:00:36 by cecourt           #+#    #+#             */
/*   Updated: 2018/12/04 16:00:37 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_check(char *str, char c, int index)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (i == index)
		return (1);
	return (0);
}

void			ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (ft_check(s1, s1[i], i) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		if (ft_check(s1, s2[i], j) == 1)
		{
			if (ft_check(s2, s2[i], i) == 1)
				ft_putchar(s2[i]);
		}
		i++;
	}
	ft_putchar('\n');
}
