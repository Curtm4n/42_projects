/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2020/01/21 14:38:02 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int		main(void)
{
	int ret;

	ret = printf("[%.g]", 123.456789);
	printf("\n[%d]\n", ret);
/*	long double nbr = 25.369;
	long double ipart = (long long)nbr;
	ipart /= 10;
	printf("%lld", (long long)ipart);*/
	return (0);
}
