/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:06:57 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:18:08 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
