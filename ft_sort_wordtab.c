/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:12:31 by cecourt           #+#    #+#             */
/*   Updated: 2018/12/04 16:12:32 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int			ft_strcmp_s(char **s1, char **s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

static void			ft_swap_s(char **a, char **b)
{
	char *tempo;

	tempo = *b;
	*b = *a;
	*a = tempo;
}

void				ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (ft_strcmp_s(&tab[i], &tab[i + 1]) > 0)
		{
			ft_swap_s(&tab[i], &tab[i + 1]);
			i = 0;
		}
		i++;
	}
}
