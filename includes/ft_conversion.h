/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 20:55:40 by quroulon          #+#    #+#             */
/*   Updated: 2017/01/15 20:31:02 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERSION_H
# define FT_CONVERSION_H

# include "ft_chartools.h"
# include "ft_stringtools.h"
# include "ft_math.h"
# include <stdlib.h>

int					ft_atoi(const char *str);
long long			ft_atoi_ll(const char *str);
long				ft_atoibase(char *str, int base);
char				*ft_itoa(int n);
char				*ft_itoabase(int n, int base, int maj);

#endif