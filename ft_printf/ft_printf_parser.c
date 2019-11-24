/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:38:37 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/24 20:12:49 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_init(void (*func_type[8])(t_struct *, va_list))
{
	func_type[0] = &ft_print_c;
	func_type[1] = &ft_print_s;
	func_type[2] = &ft_print_addr;
	func_type[3] = &ft_print_int;
	func_type[4] = &ft_print_int;
	func_type[5] = &ft_print_uint;
	func_type[6] = &ft_print_lowhex;
	func_type[7] = &ft_print_uphex;
}

const char	*ft_flag(const char *format, t_struct *data)
{
	while (*format == '-' || *format == '0')
	{
		if (*format == '0')
			data->flag |= ZERO;
		if (*format == '-')
			data->flag |= MINUS;
		format++;
	}
	if (data->flag == 3)
		data->flag = 2;
	return (format);
}

const char	*ft_width(const char *format, t_struct *data, va_list args)
{
	if (*format == '*')
	{
		data->width = va_arg(args, int);
		if (data->width < 0)
		{
			data->width *= -1;
			data->flag = 2;
		}
		format++;
	}
	if (*format >= '0' && *format <= '9')
		data->width = ft_atoi(format);
	while (*format >= '0' && *format <= '9')
		format++;
	return (format);
}

const char	*ft_precision(const char *format, t_struct *data, va_list args)
{
	if (*format == '.')
	{
		format++;
		if (*format == '*')
		{
			data->precision = va_arg(args, int);
			format++;
			return (format);
		}
		data->precision = ft_atoi(format);
		while (*format >= '0' & *format <= '9')
			format++;
	}
	return (format);
}

const char	*pars_specifier(const char *format, t_struct *data, va_list args)
{
	void	(*func_type[8])(t_struct *, va_list);
	int		index;
	char	*types;

	format++;
	index = -1;
	types = "cspdiuxX";
	reset_struct(data);
	format = ft_flag(format, data);
	format = ft_width(format, data, args);
	format = ft_precision(format, data, args);
	if (*format == '%')
		return (ft_handle_percent(format, data));
	ft_init(&func_type[0]);
	while (++index < 8)
		if (*format == types[index])
		{
			(*func_type[index])(data, args);
			format++;
			break ;
		}
	return (format);
}
