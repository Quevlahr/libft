/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 19:30:25 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:18:51 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_lstprint(t_list *begin)
{
	while (begin)
	{
		write(1, begin->content, begin->content_size);
		begin = begin->next;
	}
}
