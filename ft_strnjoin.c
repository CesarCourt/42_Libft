/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:43:03 by cecourt           #+#    #+#             */
/*   Updated: 2018/12/04 17:43:04 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	char *result;

	if (!s1 || !s2)
		return (NULL);
	if (!(result = ft_strnew(ft_strlen(s1) + ft_strlen(s2) -
		(ft_strlen(s2) - n))))
		return (NULL);
	ft_strcpy(result, s1);
	ft_strncat(result, s2, n);
	return (result);
}
