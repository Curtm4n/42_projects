/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_g.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 16:04:05 by curtman           #+#    #+#             */
/*   Updated: 2020/01/25 16:44:21 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_condition(t_struct *data, long double nbr, int exponant)
{
	long long	len;

	if (exponant < -4 || exponant >= data->precision) //e case
	{
		len = 5 + data->precision + 1;
		len = (nbr < 0 || data->flag & 4 || data->flag & 16) ? len + 1 : len;
		nbr = ft_final_nbr(nbr, exponant);
		nbr = ft_round_nbr(data, nbr);
		ft_print_e_next(data, len, nbr, exponant);
	}
	else //f case
	{
		len = ft_nblen(((nbr < 0) ? (long long)-nbr : (long long)nbr));
		len = len + data->precision + 1;
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
