/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:53:32 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:32:35 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void		*ft_memalloc(size_t size)
{
	void		*ret;

	if (!(ret = (void*)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
