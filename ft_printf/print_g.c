/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_g.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 16:04:05 by curtman           #+#    #+#             */
/*   Updated: 2020/01/31 17:12:40 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_correct_precision(t_struct *data, long double nbr)
{
	int			indicator;
	long long	prec;

	indicator = 0;
	data->precision -= ft_nblen((long long)nbr);
	prec = data->precision + 1;
	while (--prec > 0)
	{
		nbr -= (long long)nbr;
		nbr *= 10;
		if ((long long)nbr == 0)
			indicator++;
		else
			indicator = 0;
	}
	data->precision -= indicator;
	if (data->precision < 0)
		data->precision = 0;
}

void	ft_condition(t_struct *data, long double nbr, int exponant)
{
	long long	len;

	if (exponant < -4 || exponant >= data->precision) //e case
	{
		data->precision -= 1;
		len = 5 + data->precision;
		len += (data->precision > 0) ? 1 : 0;
		len = (nbr < 0 || data->flag & 4 || data->flag & 16) ? len + 1 : len;
		nbr = ft_final_nbr(nbr, exponant);
		nbr = ft_round_nbr(data, nbr);
		ft_print_e_next(data, len, nbr, exponant);
	}
	else //f case
	{
		ft_correct_precision(data, nbr);
		len = ft_nblen((long long)nbr);
		len = len + data->precision;
		len += (data->precision > 0) ? 1 : 0;
		len = (nbr < 0 || data->flag & 4 || data->flag & 16) ? len + 1 : len;
		nbr = ft_round_nbr(data, nbr);
		ft_print_float_next(data, len, nbr);
	}
	len = (data->width > len) ? data->width : len;
	data->nb_char += len;
}

void	ft_print_g(t_struct *data, va_list args)
{
	long double nbr;
	int			exponant;

	data->precision = (data->precision < 0) ? 6 : data->precision;
	data->precision = (data->precision == 0) ? 1 : data->precision;
	nbr = (data->size & L) ? va_arg(args, long double) : va_arg(args, double);
	exponant = ft_find_exponant(data, nbr);
	ft_condition(data, nbr, exponant);
}
