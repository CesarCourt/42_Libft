/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:52:09 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/12 16:52:11 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*t1;
	unsigned char		*t2;

	i = 0;
	t1 = (unsigned char*)s1;
	t2 = (unsigned char*)s2;
	while (t1[i] == t2[i])
	{
		if (t1[i] == '\0' && t2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (t1[i] != '\0' + 1 && t2[i] != '\0' + 1 && i < n)
	{
		if (t1[i] != t2[i])
		{
			return (t1[i] - t2[i]);
		}
		i++;
	}
	return (0);
}
