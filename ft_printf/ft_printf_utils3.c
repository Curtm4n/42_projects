/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:12:59 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/23 19:07:14 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_u_nblen(unsigned int nbr)
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

int		ft_nblen_hex(unsigned int hex)
{
	int i;

	i = 1;
	while (hex > 15)
	{
		hex /= 16;
		i++;
	}
	return (i);
}
