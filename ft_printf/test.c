/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:30:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/12 12:39:07 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	(void)ac;
	while(*av[1] != '\0')
	{
		write(1, &(*av[1]), 1);
		av[1]++;
	}
}
