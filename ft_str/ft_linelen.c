/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 18:02:06 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:41:11 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringtools.h"

int		ft_linelen(const char *str, int i)
{
	int		len;

	len = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
