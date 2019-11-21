/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:57:21 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/21 16:55:14 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int a = 42;
	int ret;

	printf("**********Mon printf**********\n");
	ret = ft_printf("Hello m%*cc !\nComment %3.*s ?\nmy address is: [%*p]\nmon nombre fetiche le %d", -4, 'e', 0, "vas-tu", -20, &a, 42);
	printf("\nThe function return : [%i]\n", ret);
	printf("\n------------------------------------------------------\n**********Le vrai printf**********\n");
	ret = printf("Hello m%*cc !\nComment %3.*s ?\nmy address is: [%*p]\nmon nombre fetiche le %d", -4, 'e', 0, "vas-tu", -20, &a, 42);
	printf("\nThe function return : [%i]\n", ret);
	return (0);
}
