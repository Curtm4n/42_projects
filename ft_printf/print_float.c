/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:11:58 by curtman           #+#    #+#             */
/*   Updated: 2019/12/01 23:25:37 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

double	ft_recursive_power(double nbr, unsigned int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nbr)
	if (power > 1)
		nbr *= ft_recursive_power(10, --power);
	return (nbr);
}

void	ft_round_nbr(t_struct *data, double nbr)
{
	
}

void	ft_print_float(t_struct *data, va_list args)
{
	double nbr;

	nbr = va_arg(args, double);
	ft_round_nbr(data, nbr);
	//data->nb_char += something
}
