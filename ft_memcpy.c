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
	unsigned char *cpydst;
	unsigned char *cpysrc;

	cpydst = (unsigned char*)dst;
	cpysrc = (unsigned char*)src;
	while (n > 0)
	{
		*cpydst = *cpysrc;
		cpydst++;
		cpysrc++;
		n--;
	}
	return (dst);
}
