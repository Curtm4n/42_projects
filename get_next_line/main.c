/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:55:48 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/22 18:10:57 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int fd;
	char **tab;

	if ((fd = open("blabla.txt", O_RDONLY)) == -1)
		return (42);
	tab = get_next_line(fd, );
	return (0);
}
