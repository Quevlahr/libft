/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:17:29 by quroulon          #+#    #+#             */
/*   Updated: 2016/03/21 15:17:52 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlen(t_list *begin_list)
{
	int		nb;

	nb = 0;
	while (begin_list)
	{
		nb++;
		begin_list = begin_list->next;
	}
	return (nb);
}

