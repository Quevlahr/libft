/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:14:57 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:18:11 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_lstat(t_list *begin, unsigned int nb)
{
	t_list			*list;
	t_list			*ptr_null;
	unsigned int	i;

	list = begin;
	ptr_null = NULL;
	i = 1;
	if (begin == NULL || nb < 1)
		return (ptr_null);
	while (list != NULL && i < nb)
	{
		list = list->next;
		i++;
	}
	if (list == NULL)
		return (ptr_null);
	return (list);
}
