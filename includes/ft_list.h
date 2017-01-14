/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:03:57 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/14 21:09:38 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstat(t_list *begin, unsigned int nb);
void				ft_lstclear(t_list **begin);
int					ft_lstcontentsize(t_list *begin);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstprint(t_list *begin);
void				ft_lstpush(t_list **begin, void *content, size_t size);
void				ft_list_reverse(t_list **begin);
int					ft_lstsize(t_list *begin);
char				*ft_lsttochar(t_list *list, char *str);

// t_list				*ft_lstcreate(void *content, size_t size);

#endif