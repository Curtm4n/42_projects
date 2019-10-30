/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:55:48 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/30 17:53:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int		main(void)
{
	int		ret;
	int		fd;
	char	**line;

	if ((line = malloc(sizeof(char *) * 1)) == NULL)
		return (42);
	if ((fd = open("Mr_Robot.txt", O_RDONLY)) == -1)
		return (42);
	printf("Avant GNL\n\n\n");
	while ((ret = get_next_line(fd, line)) > 0)
	{
		printf("GNL return %d and read :\n", ret);
		printf("%s\n", *line);
		free(*line);
	}
	printf("%d\n", ret);
	close(fd);
	return (0);
}
