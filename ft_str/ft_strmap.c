/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:45:41 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:42:14 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringtools.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	if (s && f)
	{
		i = ft_strlen((char*)s);
		if (!(str = (char*)malloc(sizeof(str) * (i + 1))))
			return (NULL);
		while (s[j])
		{
			str[j] = f(s[j]);
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
