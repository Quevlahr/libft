/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:55:39 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:18:54 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_lstpush(t_list **begin, void *content, size_t size)
{
	t_list		*list;

	list = *begin;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_lstnew(content, size);
	}
	else
		*begin = ft_lstnew(content, size);
}
