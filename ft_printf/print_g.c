/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_g.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:45:32 by cdapurif          #+#    #+#             */
/*   Updated: 2020/01/21 15:05:40 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print_g(t_struct *d, va_list args)
{
	long double	nbr;

	nbr = (d->size & L) ? va_arg(args, double) : va_arg(args, long double);
	d->precision = (d->precision < 0) ? 6 : d->precision;
	d->precision = (d->precision = 0) ? 1 : d->precision;
}
