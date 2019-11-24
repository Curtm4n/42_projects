/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 18:26:10 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/24 17:12:21 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_lowhex(t_struct *data, va_list args)
{
	int				len;
	unsigned int	hex;

	hex = va_arg(args, unsigned int);
	len = ft_nblen_hex(hex);
	len = (len > data->precision) ? len : data->precision;
	if (data->precision > -1 && data->flag == 1)
		data->flag = 0;
	if (data->precision == 0 && hex == 0)
	{
		place_sep(data, data->width);
		data->nb_char += data->width;
		return ;
	}
	if (data->width > len && data->flag != 2)
		place_sep(data, data->width - len);
	place_precision(data->precision - ft_nblen_hex(hex));
	ft_puthex(hex);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - len);
	data->nb_char += (len > data->width) ? len : data->width;
}
