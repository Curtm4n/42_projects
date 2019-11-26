/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:03:51 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/26 20:12:10 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_struct *data, va_list args)
{
	long long	len;
	long long	nbr;

	nbr = ft_resize(data, args);
	len = (ft_nblen(nbr) > data->precision) ? ft_nblen(nbr) : data->precision;
	if (data->precision > -1 && data->flag == 1)
		data->flag = 0;
	if (data->precision == 0 && nbr == 0)
	{
		place_sep(data, data->width);
		data->nb_char += data->width;
		return ;
	}
	if (data->width > len && data->flag == 0)
		place_sep(data, data->width - ((nbr < 0) ? len + 1 : len));
	if (nbr < 0)
		write(1, "-", 1);
	if (data->width > len && data->flag == 1)
		place_sep(data, data->width - ((nbr < 0) ? len + 1 : len));
	place_precision(data->precision - ft_nblen(nbr));
	ft_putnbr((nbr < 0) ? -nbr : nbr);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - ((nbr < 0) ? len + 1 : len));
	len = (nbr < 0) ? len + 1 : len;
	data->nb_char += (len > data->width) ? len : data->width;
}
