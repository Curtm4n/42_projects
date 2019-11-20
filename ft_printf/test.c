/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/20 19:48:27 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	int a = 42;
	int ret;

	printf("%llu", &a);
	ret = printf("%.*s", 5, "bonjour");
	printf("\n[%d]\n", ret);
	return (0);
}
