/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:23:06 by cdapurif          #+#    #+#             */
/*   Updated: 2020/02/14 10:53:38 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_struct *data, va_list args)
{
	long long	len;
	char		c;
	wint_t		wide_char;

	wide_char = 0;
	c = 0;
	if (data->size & L)
		wide_char = va_arg(args, wint_t);
	else
		c = (char)va_arg(args, int);
	len = (data->width < 1) ? 1 : data->width;
	if (!(data->flag & MINUS))
		place_sep(data, len - 1);
	if (data->size & L)
		write(1, &wide_char, 1);
	if (!(data->size & L))
		write(1, &c, 1);
	if (data->flag & MINUS)
		place_sep(data, len - 1);
	data->nb_char += len;
}
