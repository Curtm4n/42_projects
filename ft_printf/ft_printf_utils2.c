/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 20:18:52 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/21 16:44:09 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	place_sep(t_struct *data, int len)
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
