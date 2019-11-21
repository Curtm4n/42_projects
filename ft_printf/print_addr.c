/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:06:56 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/21 16:48:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_addr(t_struct *data, va_list args)
{
	unsigned long long addr;

	if (data->flag == 1)
		data->flag = 0;
	addr = (unsigned long long)va_arg(args, void *);
	if (data->width > 14 && data->flag != 2)
		place_sep(data, data->width - 14);
	write(1, "0x", 2);
	ft_puthex(addr);
	if (data->width > 14 && data->flag == 2)
		place_sep(data, data->width - 14);
	data->nb_char += (data->width > 14) ? data->width : 14;
}
