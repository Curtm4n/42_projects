/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:12:59 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/24 20:16:13 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_u_nblen(unsigned int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int			ft_nblen_hex(unsigned int hex)
{
	int i;

	i = 1;
	while (hex > 15)
	{
		hex /= 16;
		i++;
	}
	return (i);
}

int			ft_nblen_hex_long(unsigned long long hex)
{
	int i;

	i = 1;
	while (hex > 15)
	{
		hex /= 16;
		i++;
	}
	return (i);
}

const char	*ft_handle_percent(const char *format, t_struct *data)
{
	if (data->width > 1 && data->flag != 2)
		place_sep(data, data->width - 1);
	write(1, "%", 1);
	if (data->width > 1 && data->flag == 2)
		place_sep(data, data->width - 1);
	data->nb_char += (data->width > 1) ? data->width : 1;
	format++;
	return (format);
}
