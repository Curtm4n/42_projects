/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:23:06 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/29 19:42:56 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_struct *data, va_list args)
{
	char	fill_char;
	int		len_tab;
	int		i;
	char	c;
	char	tab[(data->width < 1) ? 1 : data->width];

	i = -1;
	len_tab = sizeof(tab);
	fill_char = ((data->flag == ZERO) ? '0' : ' ');
	c = (char)va_arg(args, int);
	while (++i < len_tab)
		tab[i] = fill_char;
	if (data->flag == MINUS)
		tab[0] = c;
	else
		tab[len_tab - 1] = c;
	write(1, tab, len_tab);
	data->nb_char += len_tab;
}
