/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/27 15:01:13 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(void)
{
	//int flag = 9; //in binary is 00001010 or 10
	int ret;

	//if (flag & 1) //in binary is 00000010
	//	printf("%d", flag ^ 1);
	//else
	//	printf("not an odd number");
	ret = printf("[%0+10d]", 42);
	printf("\n[%d]\n", ret);
	return (0);
}
