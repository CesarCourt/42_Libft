/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:17:02 by cecourt           #+#    #+#             */
/*   Updated: 2018/12/04 16:17:04 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int i;
	int tempo;

	i = 0;
	tempo = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tempo = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tempo;
			i = 0;
		}
		else
			i++;
	}
}
