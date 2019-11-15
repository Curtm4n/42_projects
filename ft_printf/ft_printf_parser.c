/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:38:37 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/15 20:25:37 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_flag(char *format, t_struct *data)
{
	char flags[2];

	flags = {'-', '0'};
	while (*format != '\0' && (*format == flags[0] || *format == flags[1]))
	{
		if (*format == '-')
			data->flags == 1;
		if (*format == '0')
			data->flags == 2;
		format++;
	}
}

void	ft_width(char *format, t_struct *data)
{
	if (*format != '\0' && (*format >= '0' && *format <= '9'))
		data->width = ft_atoi(format);
	while (*format != '\0' && (*format >= '0' && *format <= '9'))
		format++;
}

void	pars_specifier(char *format, t_struct *data)
{
	format++;
	reset_struct(data);
	ft_flag(format, data);
	ft_width(format, data);
	ft_precision(format, data);
	ft_type()
}
