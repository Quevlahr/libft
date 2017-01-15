/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:01:51 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:19:02 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int				ft_lstsize(t_list *begin)
{
	t_list		*list;
	int			i;

	list = begin;
	i = 0;
	while (list)
	{
		i += ft_strlen(list->content);
		list = list->next;
	}
	return (i);
}
