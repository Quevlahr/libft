/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:26:30 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:18:44 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*list;
	t_list		*link;

	while (lst)
	{
		if (list == NULL)
		{
			list = f(lst);
			link = list;
		}
		else
			link->next = f(lst);
		lst = lst->next;
	}
	return (list);
}
