/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 11:57:47 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/23 12:57:07 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_uphex(unsigned int nb)
{
	char c;

	if (nb > 15)
		ft_put_uphex(nb / 16);
	if (nb % 16 > 9)
		c = (nb % 16 + 55);
	else
		c = (nb % 16 + 48);
	write(1, &c, 1);
}

void	ft_print_uphex(t_struct *data, va_list args)
{
	int				len;
	unsigned int	hex;

	hex = va_arg(args, unsigned int);
	len = ft_nblen_hex(hex);
	len = (len > data->precision) ? len : data->precision;
	if (data->precision != -1 && data->flag == 1)
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
	ft_put_uphex(hex);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - len);
	data->nb_char += (len > data->width) ? len : data->width;
}
