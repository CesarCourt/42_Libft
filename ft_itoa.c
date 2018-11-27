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

static int		ft_count_nbr(int nb)
{
	unsigned	nbr;
	int			total;

	if (nb < 0)
	{
		total++;
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr > 9)
	{
		total++;
		ft_putnbr(nbr / 10);
	}
	else
		total++;
	return (total);
}


char		*ft_itoa(int n)
{
	char *dst;

	if (!(dst = (char*)ft_memalloc(sizeof(char) * ft_count_nbr(n) + 1)))
		return (NULL);

}
