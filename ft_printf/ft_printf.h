/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:52:55 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/14 12:23:30 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_struct
{
	int	nb_char;
}				t_struct;

int				ft_printf(const char *format, ...);
int				ft_write_basics(const char *format, t_struct *data);
void			reset_struct(t_struct *data);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(long nb);
void			ft_puthex(long nb);

#endif
