/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_g.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:45:32 by cdapurif          #+#    #+#             */
/*   Updated: 2020/01/24 17:06:58 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_g_float(t_struct *d, long double nbr)
{
	long long len;

	len = 1 + ft_nblen(((nbr < 0) ? (long long)-nbr : (long long)nbr));
	len = (nbr < 0 || d->flag & 4 || d->flag & 16) ? len + 1 : len;
	nbr = ft_round_nbr(d, nbr);
	ft_print_float_next(d, len, nbr);
	len = (d->width > len) ? d->width : len;
	d->nb_char += len;
}

void		ft_print_g_e(t_struct *data, long double nbr, int exponant)
{
	long long len;

	len = 6
}

void		ft_print_g(t_struct *d, va_list args)
{
	long double	nbr;
	int			exponant;

	nbr = (d->size & L) ? va_arg(args, long double) : va_arg(args, double);
	d->precision = (d->precision < 0) ? 6 : d->precision;
	d->precision = (d->precision == 0) ? 1 : d->precision;
	exponant = ft_find_exponant(data, nbr);
	if (exponant < d->precision || exponant >= -4)
		ft_print_g_float(d, nbr);
	else
		ft_print_g_e(d, nbr, exponant)
}
