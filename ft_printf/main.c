/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:57:21 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/23 15:24:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int a = 42;
	int ret;

	printf("**********Mon printf**********\n");
	ret = ft_printf("Hello m%*cc !\nComment ?\nmy address is: [%*p]\nmon nombre fetiche le [%-9.5d]\nmon unsigned\net un nombre en hexa : [%8.5x]\net pour finir mon up_hexa : [%8.5X]", -4, 'e', -20, &a, -42, 4012, 4012);
	printf("\nThe function return : [%i]\n", ret);
	printf("\n------------------------------------------------------\n**********Le vrai printf**********\n");
	ret = printf("Hello m%*cc !\nComment ?\nmy address is: [%*p]\nmon nombre fetiche le [%-9.5d]\nmon unsigned\net un nombre en hexa : [%8.5x]\net pour finir mon up_hexa : [%8.5X]", -4, 'e', -20, &a, -42, 4012, 4012);
	printf("\nThe function return : [%i]\n", ret);
	return (0);
}
