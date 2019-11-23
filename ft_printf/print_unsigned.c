/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:34:33 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/23 19:06:01 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(t_struct *data, va_list args)
{
	int				len;
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	len = ft_u_nblen(nbr);
	len = (len > data->precision) ? len : data->precision;
	if (data->precision != -1 && data->flag == 1)
		data->flag = 0;
	if (data->precision == 0 && nbr == 0)
	{
		place_sep(data, data->width);
		data->nb_char += data->width;
		return ;
	}
	if (data->width > len && data->flag != 2)
		place_sep(data, data->width - len);
	place_precision(data->precision - ft_nblen(nbr));
	ft_putnbr(nbr);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - len);
	data->nb_char += (len > data->width) ? len : data->width;
}
