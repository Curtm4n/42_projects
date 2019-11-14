/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:56:23 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/14 12:24:11 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_write_basics(const char *format, t_struct *data)
{
	int i;

	i = 0;
	while (format[i] != '\0' && format[i] != '%')
		i++;
	write(1, format, i);
	data->nb_char += i;
	return (i);
}

/*void		reset_struct(t_struct *data)
{
	//use every time you have a % character
}*/

int			ft_printf(const char *format, ...)
{
	t_struct	data;
	char		current_char;
	va_list		args;

	data.nb_char = 0;
	va_start(args, format);
	while ((current_char = *format) != '\0')
	{
		if (current_char != '%')
			format += ft_write_basics(format, &data);
		//if ((current_char = *format) == '%')
		//{
		//	pars_specifier();
		//	format++; //maybe not because when we reach a % we have multiple
			          //characters to skip so to modify later
		//}
	}
	va_end(args);
	return (data.nb_char);
}
