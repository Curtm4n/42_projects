/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:06:56 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/20 19:58:35 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_addr(t_struct *data, va_list args)
{
	unsigned long long addr;

	addr = (unsigned long long)va_arg(args, void *);
	write(1, "0x", 2);
	ft_puthex(addr);
	//printf("%llu\n", addr);
}
