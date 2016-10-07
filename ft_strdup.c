/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:40:01 by quroulon          #+#    #+#             */
/*   Updated: 2016/10/07 15:30:38 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned long	i;
	char			*s2;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	s2 = ft_strnew(ft_strlen(s1));
	while (i < ft_strlen(s1))
	{
		s2[i] = ((char*)s1)[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
