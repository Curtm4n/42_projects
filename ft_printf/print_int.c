/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:03:51 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/22 13:45:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	place_precision(t_struct *data, int len)
{
	int i;
	char tab[(len > 0) ? len : 1];

	i = -1;
	if (len <= 0)
		return ;
	while (++i < len)
		tab[i] = '0';
	write(1, tab, len);
}

void	ft_print_int(t_struct *data, va_list args)
{
	int len;
	int nbr;

	nbr = va_arg(args, int);
	len = ft_nblen(nbr);
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
	place_precision(data, data->precision - ft_nblen(nbr));
	ft_putnbr(nbr);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - len);
	data->nb_char += (len > data->width) ? len : data->width;
}
