/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:06:56 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/26 15:19:31 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_addr(t_struct *data, va_list args)
{
	int					len;
	unsigned long long	addr;

	if (data->flag == 1)
		data->flag = 0;
	addr = (unsigned long long)va_arg(args, void *);
	len = ft_nblen_hex(addr) + 2;
	if (data->width > len && data->flag != 2)
		place_sep(data, data->width - len);
	write(1, "0x", 2);
	ft_puthex(addr);
	if (data->width > len && data->flag == 2)
		place_sep(data, data->width - len);
	data->nb_char += (data->width > len) ? data->width : len;
}
