/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:55:48 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/26 11:58:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int		main(void)
{
	int		ret;
	int		fd;
	char	**line;

	if ((fd = open(Mr_Robot.txt, O_RDONLY)) == -1)
		return (42);
	while ((ret = get_next_line(fd, line)) > 0)
	{
		printf("GNL return %d and read :\n", ret);
		printf("%s\n", *line);
	}
	close(fd);
	return (0);
}
