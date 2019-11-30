/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:57:21 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/30 01:14:40 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int ret;

	setlocale(LC_NUMERIC, "en_GB");
	printf("**********Mon printf**********\n");
	ret = ft_printf("[%.10u]", 12345);
	printf("\nThe function return : [%i]\n", ret);
	printf("\n------------------------------------------------------\n**********Le vrai printf**********\n");
	ret = printf("[%.10u]", 12345);
	printf("\nThe function return : [%i]\n", ret);
	return (0);
}
