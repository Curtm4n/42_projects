/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:56:23 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/13 19:50:54 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_special_char(char *format)
{
	char second[8];
	char special[8];
	char first;

	special = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\\'};
	second = {'a', 'b', 'f', 'n', 'r', 't', 'v', '\\'};
	first = *format;
	format++
}

int		ft_printf(const char *format, ...)
{
	int		char_num;
	char	current_char;
	va_list args;

	char_num = 0;
	va_start(args, format);
	while ((current_char = *format) != '\0')
	{
		char_num++;
		if (current_char == '\\')
			current_char = ft_special_char(format);
		if (current_char != '%')
			write(1, &current_char, 1);
		//if (current_char == '%')
		//	pars_specifier();
		format++;
	}
	va_end(args);
	return (char_num);
}
