/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:47:03 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/21 22:47:04 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	if (!(new = (char*)ft_memalloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(new, 0, size);
	new[size] = '\0';
	return (new);
}
