/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_e.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:15:34 by cdapurif          #+#    #+#             */
/*   Updated: 2019/12/04 22:00:13 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double		ft_final_nbr(t_struct *data, long double nbr)
{
	long 
}

/*long double	ft_create_fpart(t_struct *data, long double nbr)
{
	long double	ipart;
	long double	fpart;
	long long	cpy;
	long long	exponant;
	int			i;

	i = 0;
	ipart = ((nbr < 0) ? (long long)-nbr : (long long)nbr);
	while ((long long)ipart > 9)
	{
		ipart /= 10;
		i++;
	}
	exponant = i
	ft_putnbr((long long)ipart);
	cpy = (long long)ipart;
	cpy *= ft_recursive_power(10, i);
	fpart = ((nbr < 0) ? (long long)-nbr : (long long)nbr) - cpy;
	i++;
	while (--i > 0)
		fpart /= 10;
	fpart += exponant;
	return (fpart);
}*/

/*void		ft_write_e(t_struct *data, long double nbr)
{
	long double	fpart;

	fpart = ft_create_fpart(data, nbr);
	exponant = (long long)fpart;
	fpart -= exponant;
	if (data->precision == 0)
	{
		write(1, "e+", 2);
		ft_putnbr(exponant);
		if (data->flag & 8)
	}
}*/

void		ft_print_e_next(t_struct *d, long long len, long double nbr)
{
	char			sign;
	unsigned short	f;
	long long		p;

	f = d->flag;
	p = d->precision;
	sign = (f & 16) ? ' ' : '+';
	if (d->width > len && (!(f & 1) && !(f & 2)))
		place_sep(d, d->width - ((f & 8 && p == 0) ? len + 1 : len));
	if (nbr < 0 || f & 4 || f & 16)
		(nbr < 0) ? write(1, "-", 1) : write(1, &sign, 1);
	if (d->width > len && f & 1)
		place_sep(d, d->width - ((f & 8 && p == 0) ? len + 1 : len));
	ft_write_e(d, nbr);
	if (d->width > len && f & 2)
		place_sep(d, d->width - ((f & 8 && p == 0) ? len + 1 : len));
}

void		ft_print_e(t_struct *data, va_list args)
{
	long double nbr;
	long long	len;

	nbr = (data->size & L) ? va_arg(args, long double) : va_arg(args, double);
	len = 5;
	if (data->precision != 0)
		len = len + ((data->precision < 0) ? 6 : data->precision) + 1;
	len = (nbr < 0 || data->flag & 4 || data->flag & 16) ? len + 1 : len;
	nbr = ft_final_nbr(data, nbr);
	//nbr = ft_round_nbr(data, nbr); not good place
	ft_print_e_next(data, len, nbr);
	len = (data->precision == 0 && data->flag & 8) ? len + 1 : len;
	len = (data->width > len) ? data->width : len;
	data->nb_char += len;
}
