/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:00:18 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:42:49 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringtools.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;
	int		max;

	a = (char)c;
	i = 0;
	max = 0;
	while (s[i])
	{
		if (s[i] == a)
			max = i;
		i++;
	}
	if (s[i] == a)
		max = i;
	if ((max != 0 && s != NULL) || (max == 0 && s[0] == a))
		return (&((char*)s)[max]);
	return (NULL);
}
