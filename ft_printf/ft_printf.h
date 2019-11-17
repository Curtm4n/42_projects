/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:52:55 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/17 18:40:32 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_struct
{
	int				nb_char;
	unsigned int	flag;
	unsigned int	width;
	unsigned int	precision;
}				t_struct;

enum			e_flags
{
	MINUS = 1,
	ZERO = 2
};

int				ft_printf(const char *format, ...);
int				ft_write_basics(const char *format, t_struct *data);
unsigned int	ft_atoi(const char *str);
void			reset_struct(t_struct *data);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(long nb);
void			ft_puthex(long nb);
const char		*pars_specifier(const char *format, t_struct *data,
va_list args);
void			ft_print_c(t_struct data, va_list args);
void			ft_print_s(t_struct data, va_list args);
void			ft_print_addr(t_struct data, va_list args);
void			ft_print_int(t_struct data, va_list args);
void			ft_print_uint(t_struct data, va_list args);
void			ft_print_lowhex(t_struct data, va_list args);
void			ft_print_uphex(t_struct data, va_list args);

#endif
