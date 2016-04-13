/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 20:27:13 by quroulon          #+#    #+#             */
/*   Updated: 2016/04/13 20:27:31 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		puissance(int nb, int psc)
{
	int			i;
	int			res;

	i = 0;
	res = 1;
	while (i < psc)
	{
		res *= nb;
		i++;
	}
	return (res);
}

static char		how_n(int *n, int base, int psc)
{
	char		c_res;
	int			i_res;
	int			tmp;

	i_res = 1;
	tmp = puissance(base, psc);
	while (*n > (i_res * tmp))
		i_res++;
	ft_putnbrdl(tmp);
	*n -= i_res *tmp;
	c_res = (i_res > 9 ? i_res + 'a' : i_res + '0');
	return (c_res);
}

char			*ft_itoabase(int n, int base)
{
	int			psc;
	int			res;
	int			i;
	char		*str;

	psc = 0;
	i = 0;
	res = (n < 0) ? -1 : 1;
	ft_abs(n);
	while (n >= puissance(base, psc))
		psc++;
	str = ft_strnew(psc + 1);
	res == -1 ? str[i++] = '-' : 0;
	while (psc > 0)
	{
		str[i] = how_n(&n, base, psc);
		psc--;
		i++;
	}
	return (str);
}

int				main(void)
{
	printf("%s\n", ft_itoabase(420, 16));
	return (0);
}