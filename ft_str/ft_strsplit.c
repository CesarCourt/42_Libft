/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:36:19 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/21 23:36:21 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(const char *str, char c)
{
	int i;
	int tot;

	i = 0;
	tot = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			tot++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (tot);
}

static char		**ft_split2(char **res, char const *str, char c, int tot)
{
	int words;
	int letters;
	int i;

	words = 0;
	i = 0;
	while (words < tot)
	{
		letters = 0;
		if (!(res[words] = (char*)ft_memalloc(sizeof(char) * ft_strlen(str) + 1)))
			return (NULL);
		while (str[i] == c)
			i++;
		while (str[i] && str[i] != c)
			res[words][letters++] = str[i++];
		res[words][letters] = '\0';
		words++;
	}
	res[words] = NULL;
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dst;
	int		tot;

	if (s && c)
		tot = ft_nb_words(s, c);
	if (!s || !(dst = (char**)ft_memalloc(sizeof(char*) * (ft_nb_words(s, c) + 1))))
		return (NULL);
	dst = ft_split2(dst, s, c, tot);
	return (dst);
}
