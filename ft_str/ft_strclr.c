/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:58:01 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:41:23 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringtools.h"

void		ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
