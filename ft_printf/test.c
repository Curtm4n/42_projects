/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/14 18:27:30 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	printf("test du type s : [%.5s]\n", "Hi");
//	printf("test du type p", %p);
	printf("test du type d : [%.5d]\n", 25);
//	printf("test du type u", %u);
//	printf("test du type x", %x);
//	printf("test du type X", %X);
	return (0);
}
