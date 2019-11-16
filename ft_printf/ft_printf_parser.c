/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:38:37 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/16 18:22:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag(char *format, t_struct *data)
{
	while (*format != '\0' && (*format == '-' || *format == '0'))
	{
		if (*format == '-')
			data->flags |= MINUS;
		if (*format == '0')
			data->flags |= ZERO;
		format++;
	}
	if (data->flags == 3)
		data->flags = 1;
}

void	ft_width(char *format, t_struct *data, va_list args)
{
	if (*format == '*')
	{
		data->width = va_arg(args, int);
		format++;
	}
	if (*format != '\0' && (*format >= '0' && *format <= '9'))
		data->width = ft_atoi(format);
	while (*format != '\0' && (*format >= '0' && *format <= '9'))
		format++;
}

void	ft_precision(char *format, t_struct *data, va_list args)
{
	if (*format == '.')
	{
		format++;
		if (*format == '*')
		{
			data->precision = va_arg(args, int);
			format++;
		}
		if (*format != '\0' && (*format >= '0' && *format <= '9'))
			data->precision = ft_atoi(format);
		while (*format != '\0' && (*format >= '0' & *format <= '9'))
			format++;
	}
}

void	pars_specifier(char *format, t_struct *data, va_list args)
{
	format++;
	reset_struct(data);
	ft_flag(format, data);
	ft_width(format, data, args);
	ft_precision(format, data, args);
	ft_type() //not sure
}
