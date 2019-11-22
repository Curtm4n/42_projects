/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 20:18:52 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/22 17:04:58 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			place_precision(t_struct *data, int len)
{
	int		i;
	char	tab[(len > 0) ? len : 1];

	i = -1;
	if (len <= 0)
		return ;
	while (++i < len)
		tab[i] = '0';
	write(1, tab, len);
}

int				ft_nblen(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void			place_sep(t_struct *data, int len)
{
	int		i;
	char	sep;
	char	tab[len];

	i = -1;
	sep = (data->flag == 1) ? '0' : ' ';
	while (++i < len)
		tab[i] = sep;
	write(1, tab, len);
}

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_atoi(const char *str)
{
	unsigned int i;
	unsigned int nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}
