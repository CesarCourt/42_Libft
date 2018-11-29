/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:36:10 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/21 23:36:11 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count_nbr(int nb)
{
	size_t i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static char			*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tempo;

	i = 0;
	j = 0;
	tempo = 0;
	while (str[i] != '\0')
		i++;
	while (j < i / 2)
	{
		tempo = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = tempo;
		j++;
	}
	return (str);
}

char				*ft_itoa(int n)
{
	unsigned int	m;
	size_t			i;
	char			*dst;
	int				neg;

	i = 0;
	m = n;
	neg = 0;
	if (!(dst = ft_strnew(ft_count_nbr(n))))
		return (NULL);
	if ((neg = n) < 0)
		m = -n;
	if (m == 0)
		dst[i] = '0';
	while (m != 0)
	{
		dst[i++] = m % 10 + '0';
		m /= 10;
	}
	if (neg < 0)
		dst[i] = '-';
	ft_strrev(dst);
	dst[i + 1] = '\0';
	return (dst);
}
