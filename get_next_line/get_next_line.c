/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:19:08 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/25 15:59:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char *buffer = NULL;
	char		*buff;

	if (fd < 0 || !line)
		return (-1);
	if (!buffer)
	{
		if ((buffer = malloc(BUFFER_SIZE)) == NULL)
			return (-1);
	}
	else if (buffer[0])
		if ((buff = ft_handle_buffer_rest(buffer)) == NULL)
			return (-1);
	if ((buff = ft_get_line(fd, buffer)) == NULL)
		return (-1);
	if (buff[0] == '\0')
		return (0);
	*line = buff;
	free(buff);
	return (1);
}
