/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:43:15 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:42:46 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringtools.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] && i < (int)n)
	{
		while (s1[i + j] == s2[j] && s2[j] && (i + j) < (int)n)
			j++;
		if (s2[j] == '\0')
			return (&((char*)s1)[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
