/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:54:39 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/19 19:48:35 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char *buff;
	int			i;
	int			ret;

	i = 0;
	if (fd < 0 || fd == 1 || fd == 2)
		return (-1);
	if ((buff = malloc(BUFFER_SIZE + 1)) == NULL)
		return (NULL);
	buff[BUFFER_SIZE] = '\0';
	if ((ret = read(fd, buff, BUFFER_SIZE)) == -1)
		return (-1);
	return (0);
}
