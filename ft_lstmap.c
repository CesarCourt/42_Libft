/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecourt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:00:57 by cecourt           #+#    #+#             */
/*   Updated: 2018/11/30 19:00:58 by cecourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *fresh;

	if (lst)
	{
		while (lst)
		{
			f(lst);
			fresh = lst;
			fresh = fresh->next;
			lst = lst->next;
		}
	}
	return (fresh);
}
