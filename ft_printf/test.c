/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/12/05 18:17:55 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int		main(void)
{
	int ret;

	ret = printf("[%.e]", 0.00000000);
	printf("\n[%d]\n", ret);
/*	long double nbr = 25.369;
	long double ipart = (long long)nbr;
	ipart /= 10;
	printf("%lld", (long long)ipart);*/
	return (0);
}
