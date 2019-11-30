/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/30 00:17:12 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>


int		main(void)
{
	int test;
	int ret;

	setlocale(LC_NUMERIC, "en_GB");
	ret = printf("%'d", test);
	printf("\n[%d]\n", ret);
	return (0);
}
