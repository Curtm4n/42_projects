/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:57:21 by cdapurif          #+#    #+#             */
/*   Updated: 2020/01/31 18:59:38 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int ret;

	printf("**********Mon printf**********\n");
	ret = ft_printf("%.0g", -958.125);
	printf("\nThe function return : [%i]\n", ret);
	printf("\n------------------------------------------------------\n**********Le vrai printf**********\n");
	ret = printf("%.0g", -958.125);
	printf("\nThe function return : [%i]\n", ret);
	return (0);
}
