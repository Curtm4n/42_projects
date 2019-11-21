/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:03:51 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/21 17:16:07 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nblen(int nbr)
{
	int i;

	i = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	ft_print_int(t_struct *data, va_list args)
{
	int	len;
	int nbr;

	nbr = va_arg(args, int);
	len = ft_nblen(nbr);
	if (data->precision != -1 && data->flag == 1)
		data->flags = 0; //here bro
	if (data->width > len && data->flag != 2)
		place_sep(data, data->width - len);
	ft_putnbr(nbr);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - len);
	data->nb_char += (data->width > len) ? data->width : len;
}
