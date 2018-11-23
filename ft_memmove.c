/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:57:26 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/12 16:57:27 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cdst;
	unsigned char		*csrc;
	unsigned long		i;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	i = 0;
	if (cdst < csrc)
	{
		while (len > i)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			cdst[len] = csrc[len];
		}
	}
	return (dst);
}
