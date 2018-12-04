/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:24:19 by cecourt           #+#    #+#             */
/*   Updated: 2018/12/04 16:24:20 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_show_match(const char *s1, char *s2)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] != '\0' && s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	if (ft_strlen(s1) == i)
		ft_putstr(s1);
	else
		return (0);
	return (0);
}
