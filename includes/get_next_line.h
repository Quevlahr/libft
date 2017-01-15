/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 20:05:22 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:27:30 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 16

# include "ft_stringtools.h"
# include <unistd.h>

typedef struct		s_gnl
{
	int				i;
	int				j;
	char			*str;
	char			*tmp;
	char			*buff;
	char			*line;
}					t_gnl;

int					get_next_line(int const fd, char **line);

#endif