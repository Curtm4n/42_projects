/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:28:40 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/20 19:01:01 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	place_sep(t_struct *data, int len)
{
	int		i;
	char	sep;
	char	tab[len];

	i = -1;
	sep = (data->flag == 1) ? '0' : ' ';
	while (++i < len)
		tab[i] = sep;
	write(1, tab, len);
}

void	ft_print_s(t_struct *data, va_list args)
{
	int		len_final;
	int		len_str;
	char	*str;

	str = va_arg(args, char *);
	if (data->precision >= 0 && data->precision < ft_strlen(str))
		len_str = data->precision;
	else
		len_str = ft_strlen(str);
	len_final = (data->width > len_str) ? data->width : len_str;
	if (data->flag != 2)
		place_sep(data, len_final - len_str);
	write(1, str, len_str);
	if (data->flag == 2)
		place_sep(data, len_final - len_str);
	data->nb_char += len_final;
}
