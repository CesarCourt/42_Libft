/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:47:50 by cecourt           #+#    #+#             */
/*   Updated: 2018/12/04 17:47:51 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strndup(const char *s1, size_t n)
{
	char *new;

	if (!(new = ft_strnew(n)))
		return (NULL);
	ft_strncpy(new, s1, n);
	return (new);
}
