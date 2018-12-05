/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:57:57 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/12 16:57:58 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmps1;
	unsigned char	*cmps2;
	size_t			i;

	i = 0;
	cmps1 = (unsigned char*)s1;
	cmps2 = (unsigned char*)s2;
	while (i < n)
	{
		if (cmps1[i] != cmps2[i])
			return (cmps1[i] - cmps2[i]);
		i++;
	}
	return (0);
}
