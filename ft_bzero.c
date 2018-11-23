/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:56:49 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/12 16:56:50 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t			i;
	int				j;
	unsigned char	*p;

	i = 0;
	j = 0;
	p = (unsigned char*)s;
	while (i < n)
	{
		*p = (unsigned char)j;
		i++;
		p++;
	}
}
