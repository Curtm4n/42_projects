/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:57:21 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/23 18:51:10 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int		ret;
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

	(void)a;
	(void)b;
	(void)c;
	(void)d;
	(void)e;
	(void)f;
	(void)g;
	(void)h;
	(void)i;
	(void)j;
	(void)k;
	(void)l;
	(void)m;
	(void)n;
	(void)o;
	(void)p;
	(void)q;
	(void)r;
	(void)s;
	(void)t;
	(void)u;

//	int ret;

//	ret = ft_printf("Hello m%*cc !\nComment ?\nmy address is:\nmon nombre fetiche le [%-9.5d]\nmon unsigned\net un nombre en hexa : [%8.5x]\net pour finir mon up_hexa : [%8.5X]", -4, 'e', -20, -42, 4012, 4012);
//	printf("\nThe function return : [%i]\n", ret);
//	ret = printf("Hello m%*cc !\nComment ?\nmy address is: [%*p]\nmon nombre fetiche le [%-9.5d]\nmon unsigned\net un nombre en hexa : [%8.5x]\net pour finir mon up_hexa : [%8.5X]", -4, 'e', -20, &a, -42, 4012, 4012);
	printf("**********Mon printf**********\n");
	ret = ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u", i, j, k, l, m, n, c, c, j);
	printf("\nThe function return : [%i]\n", ret);
	printf("\n------------------------------------------------------\n**********Le vrai printf**********\n");
	ret = printf("%i, %d, %d, %d, %d, %s, %c, %d, %u", i, j, k, l, m, n, c, c, j);
	printf("\nThe function return : [%i]\n", ret);
	return (0);
}
