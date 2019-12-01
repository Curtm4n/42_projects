/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:57:21 by cdapurif          #+#    #+#             */
/*   Updated: 2019/12/01 17:58:54 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int ret;

	setlocale(LC_NUMERIC, "en_GB");
	printf("**********Mon printf**********\n");
	ret = ft_printf("[%d]", 42);
	printf("\nThe function return : [%i]\n", ret);
	printf("\n------------------------------------------------------\n**********Le vrai printf**********\n");
	ret = printf("[%d]", 42);
	printf("\nThe function return : [%i]\n", ret);
	return (0);
}
