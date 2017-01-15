/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:18:15 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:43:03 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringtools.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (!(s == NULL || len > ft_strlen(s) || (str = ft_strnew(len))))
		return (NULL);
	while ((unsigned long)i < len && ((char *)s)[start])
	{
		str[i] = ((char*)s)[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
