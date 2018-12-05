/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:57:16 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/12 16:57:18 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cpydst;
	unsigned char	*cpysrc;
	int				i;

	i = 0;
	cpydst = (unsigned char*)dst;
	cpysrc = (unsigned char*)src;
	while (n > 0)
	{
		*cpydst = *cpysrc;
		if ((unsigned char)c == *cpysrc)
			return (dst + i + 1);
		cpydst++;
		cpysrc++;
		n--;
		i++;
	}
	return (NULL);
}
