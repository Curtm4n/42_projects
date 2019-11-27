/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:03:51 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/27 15:48:13 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_struct *d, va_list args)
{
	long long	len;
	long long	nbr;

	nbr = ft_resize(d, args);
	len = (ft_nblen(nbr) > d->precision) ? ft_nblen(nbr) : d->precision;
	if (d->precision > -1 && d->flag & 1)
		d->flag ^= 1;
	if (d->precision == 0 && nbr == 0)
	{
		place_sep(d, d->width);
		d->nb_char += d->width;
		return ;
	}
	if (d->width > len && (d->flag == 0 || d->flag == 4))
		place_sep(d, d->width - ((nbr < 0 || d->flag & 4) ? len + 1 : len));
	if (nbr < 0 || d->flag & 4)
		(nbr < 0) ? write(1, "-", 1) : write(1, "+", 1);
	if (d->width > len && d->flag & 1)
		place_sep(d, d->width - ((nbr < 0 || d->flag & 4) ? len + 1 : len));
	place_precision(d->precision - ft_nblen(nbr));
	ft_putnbr((nbr < 0) ? -nbr : nbr);
	if (d->width > len && d->flag & 2)
		place_sep(d, d->width - ((nbr < 0 || d->flag & 4) ? len + 1 : len));
	len = (nbr < 0 || d->flag & 4) ? len + 1 : len;
	d->nb_char += (len > d->width) ? len : d->width;
}
