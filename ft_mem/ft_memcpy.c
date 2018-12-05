/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:56:58 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/12 16:56:59 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cpydst;
	char	*cpysrc;

	i = 0;
	cpydst = dst;
	cpysrc = (char*)src;
	while (i < n)
	{
		cpydst[i] = cpysrc[i];
		i++;
	}
	return (dst);
}
