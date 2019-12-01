/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:52:55 by cdapurif          #+#    #+#             */
/*   Updated: 2019/12/01 17:52:29 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <locale.h>

typedef struct		s_struct
{
	int				nb_char;
	unsigned short	flag;
	long long		width;
	long long		precision;
	unsigned short	size;
}					t_struct;

enum				e_flags
{
	ZERO = 1,
	MINUS = 2,
	PLUS = 4,
	HASH = 8,
	SPACE = 16,
	APOSTROPHE = 32
};

enum				e_size
{
	H = 1,
	HH = 2,
	L = 4,
	LL = 8
};

int					ft_printf(const char *format, ...);
int					ft_write_basics(const char *format, t_struct *data);
long long			ft_nblen(long long nbr);
long long			ft_nblen_commas(long long nbr);
unsigned long long	ft_u_nblen(unsigned long long nbr);
unsigned long long	ft_u_nblen_commas(unsigned long long nbr);
long long			ft_nblen_hex(unsigned long long hex);
unsigned int		ft_atoi(const char *str);
long long			ft_strlen(char *str);
long long			ft_resize(t_struct *data, va_list args);
unsigned long long	ft_u_resize(t_struct *data, va_list args);
void				reset_struct(t_struct *data);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(long long nb);
void				ft_putnbr_commas(long long nb, int call);
void				ft_puthex(long long nb);
const char			*ft_handle_percent(const char *format, t_struct *data);
const char			*pars_specifier(const char *format, t_struct *data,
va_list args);
const char			*ft_size(const char *format, t_struct *data);
void				ft_print_c(t_struct *data, va_list args);
void				ft_print_s(t_struct *data, va_list args);
void				ft_print_addr(t_struct *data, va_list args);
void				ft_print_int(t_struct *data, va_list args);
void				ft_print_uint(t_struct *data, va_list args);
void				ft_print_lowhex(t_struct *data, va_list args);
void				ft_print_uphex(t_struct *data, va_list args);
void				ft_store_nb_char(t_struct *data, va_list args);
void				place_sep(t_struct *data, long long len);
void				place_precision(long long len);

#endif
