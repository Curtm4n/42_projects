/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:52:55 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/22 10:37:11 by cdapurif         ###   ########.fr       */
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
	int				init;
	int				nb_char;
	unsigned int	flag;
	int				width;
	int				precision;
}				t_struct;

enum			e_flags
{
	ZERO = 1,
	MINUS = 2
};

int				ft_printf(const char *format, ...);
int				ft_write_basics(const char *format, t_struct *data);
int				ft_nblen(int nbr);
unsigned int	ft_atoi(const char *str);
unsigned int	ft_strlen(char *str);
void			reset_struct(t_struct *data);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(long nb);
void			ft_puthex(long nb);
const char		*pars_specifier(const char *format, t_struct *data,
va_list args);
void			ft_print_c(t_struct *data, va_list args);
void			ft_print_s(t_struct *data, va_list args);
void			ft_print_addr(t_struct *data, va_list args);
void			ft_print_int(t_struct *data, va_list args);
void			ft_print_uint(t_struct *data, va_list args);
void			ft_print_lowhex(t_struct *data, va_list args);
void			ft_print_uphex(t_struct *data, va_list args);
void			place_sep(t_struct *data, int len);

#endif
