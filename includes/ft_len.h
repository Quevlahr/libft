/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:01:37 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/14 21:09:51 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LEN_H
# define FT_LEN_H

# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_linelen(const char *str, int i);
int					ft_lstlen(t_list *begin_list);
int					ft_nbrlen(int n);
size_t				ft_strlen(const char *s);

#endif