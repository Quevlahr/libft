/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 18:04:48 by quroulon          #+#    #+#             */
/*   Updated: 2016/02/10 18:04:56 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int			ft_read(t_list **gnl, t_list *tmp, int fd, int res)
// {
// 	char			*buf;
// 	t_list			*list;

// 	buf = ft_strnew(BUFF_SIZE);
// 	list = NULL;
// 	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
// 		ft_lstpush(&list, buf, res);
// 	ft_strdel(&buf);
// 	if (res == -1)
// 		return (-1);
// 	buf = ft_strnew(ft_lstcontentsize(list) + 1);
// 	*buf = '\2';
// 	buf++;
// 	ft_lsttochar(list, buf);
// 	buf--;
// 	ft_lstpush(gnl, buf, ft_lstcontentsize(list) + 1);
// 	tmp = *gnl;
// 	while (tmp->next)
// 		tmp = tmp->next;
// 	tmp->content_size = fd;
// 	tmp->content++;
// 	ft_lstclear(&list);
// 	ft_strdel(&buf);
// 	return (1);
// }

// static int			ft_freegnl(t_list **gnl, t_list *tmp)
// {
// 	int				i;

// 	i = 1;
// 	tmp = *gnl;
// 	if (ft_lstsize(tmp) != 1)
// 		while (tmp)
// 		{
// 			if (((char *)tmp->content)[0] != '\0')
// 				return (0);
// 			tmp = tmp->next;
// 		}
// 	while (gnl && i == 1)
// 	{
// 		while (((char *)(*gnl)->content)[0] != '\2')
// 			(*gnl)->content--;
// 		if ((*gnl)->next == NULL)
// 			i = 0;
// 		*gnl = (*gnl)->next;
// 	}
// 	ft_lstclear(gnl);
// 	*gnl = NULL;
// 	return (0);
// }

// static int			ft_line(t_list **gnl, t_list *tmp, char **line)
// {
// 	int				i;
// 	char			*str;

// 	i = 0;
// 	while (((char*)tmp->content)[i] != '\0' && ((char*)tmp->content)[i] != '\n')
// 		i++;
// 	*line = ft_strnew(i + 1);
// 	str = ft_strnew(i + 1);
// 	i = 0;
// 	while (*((char*)tmp->content) != '\0' && *((char*)tmp->content) != '\n')
// 	{
// 		str[i] = *((char*)tmp->content);
// 		tmp->content++;
// 		i++;
// 	}
// 	ft_strcpy(*line, str);
// 	ft_strdel(&str);
// 	if (*((char*)tmp->content) == '\n')
// 		tmp->content++;
// 	if (*((char*)tmp->content) == '\0')
// 		ft_freegnl(gnl, NULL);
// 	return (1);
// }

// int					get_next_line(int const fd, char **line)
// {
// 	static t_list	*gnl = NULL;
// 	t_list			*tmp;

// 	tmp = gnl;
// 	if (line == NULL)
// 		return (-1);
// 	while (tmp && tmp->content_size != (size_t)fd)
// 		tmp = tmp->next;
// 	if (tmp == NULL)
// 		if (ft_read(&gnl, tmp, fd, 0) < 0)
// 			return (-1);
// 	tmp = gnl;
// 	while (tmp->content_size != (size_t)fd)
// 		tmp = tmp->next;
// 	if (((char*)tmp->content)[0] == '\0')
// 		return (ft_freegnl(&gnl, NULL));
// 	return (ft_line(&gnl, tmp, line));
// }


static int		ft_freestr(t_list **str, int rv, t_list *tmp)
{
	int		i;

	i = 1;
	tmp = *str;
	if (ft_lstlen(tmp) != 1)
		while (tmp)
		{
			if (((char *)tmp->content)[0] != '\0')
				return (rv);
			tmp = tmp->next;
		}
	while (str && i == 1)
	{
		(*str)->content--;
		while (((char *)(*str)->content)[0] != '\2')
			(*str)->content--;
		if ((*str)->next == NULL)
			i = 0;
		*str = (*str)->next;
	}
	ft_lstclear(str);
	ft_lstclear(&tmp);
	*str = NULL;
	return (rv);
}

static char		*ft_helper(char *str, char **line)
{
	char	*dst;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_linelen(str, 0);
	dst = ft_strnew(len);
	if (str[0] == '\2')
	{
		j++;
		len--;
	}
	while (i < len)
	{
		dst[i] = str[j];
		j += 1;
		i += 1;
	}
	str += j;
	*line = ft_strnew(len + 1);
	ft_strncpy(*line, dst, len);
	ft_strdel(&dst);
	return (str);
}

static int		ft_extract_line(int const fd, t_list **str, t_list *list)
{
	int				i;
	char			*buffer;
	t_list			*tmp;

	buffer = ft_strnew(BUFF_SIZE);
	while ((i = read(fd, buffer, BUFF_SIZE)) && buffer[0] != '\0')
		ft_lstpush(&list, buffer, i);
	ft_strdel(&buffer);
	if (i == -1)
		return (-1);
	buffer = ft_strnew(ft_lstcontentsize(list) + 1);
	buffer[0] = '\2';
	tmp = list;
	while (tmp)
	{
		buffer = ft_strncat(buffer, tmp->content, tmp->content_size);
		tmp = tmp->next;
	}
	ft_lstclear(&list);
	ft_lstpush(str, buffer, ft_strlen(buffer) + 1);
	ft_strdel(&buffer);
	return (1);
}

static t_list	*ft_change_link(t_list **str, int fd)
{
	t_list		*tmp;

	if ((size_t)fd != (*str)->content_size)
	{
		tmp = *str;
		while (tmp->next && (size_t)fd != tmp->content_size)
			tmp = tmp->next;
		if (tmp->next == NULL && (size_t)fd != tmp->content_size)
		{
			tmp = *str;
			if (ft_extract_line(fd, &tmp, NULL) == -1)
				return (NULL);
			while (tmp->next && (size_t)fd != tmp->content_size)
				tmp = tmp->next;
			tmp->content_size = (size_t)fd;
		}
		return (tmp);
	}
	return (*str);
}

int				get_next_line(int const fd, char **line)
{
	static t_list	*str = NULL;
	t_list			*tmp;
	int				i;

	if (line == NULL)
		return (-1);
	if (!str)
	{
		if ((i = ft_extract_line(fd, &str, NULL)) == -1)
			return (-1);
		str->content_size = (size_t)fd;
	}
	if ((tmp = ft_change_link(&str, fd)) == NULL)
		return (-1);
	if (((char *)tmp->content)[1] == '\0')
		i = 0;
	tmp->content = ft_helper(tmp->content, line);
	if (((char *)tmp->content)[0] == '\0' && i == 0)
		return (ft_freestr(&str, 0, NULL));
	((char *)tmp->content)[0] == '\n' ? (tmp->content)++ : 0;
	if (((char *)tmp->content)[0] == '\0')
		return (ft_freestr(&str, 1, NULL));
	return (1);
}
