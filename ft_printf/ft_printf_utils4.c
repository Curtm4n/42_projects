/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:05:08 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/30 00:01:09 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long	ft_u_nblen_commas(unsigned long long nbr)
{
	int i;
	unsigned long long cpy;

	i = 1;
	if (nbr < 0)
		nbr *= -1;
	cpy = nbr;
	while (cpy > 999)
	{
		i++;
		cpy /= 1000;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_commas(long long nb, int call)
{
	int		put;
	char	c;

	put = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (call == 0)
	{
		call = 3;
		put = 1;
	}
	if (nb > 9)
	{
		ft_putnbr_commas(nb / 10, --call);
	}
	c = (nb % 10 + 48);
	if (put == 1 && nb > 9)
		write(1, ",", 1);
	write(1, &c, 1);
}
