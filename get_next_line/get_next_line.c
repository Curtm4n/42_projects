/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:19:08 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/23 15:25:51 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	char	*buff;

	if (fd < 0 || !line)
		return (-1);
	if ((buff = ft_get_line(fd)) == NULL)
		return (-1);
	if (buff[0] == '\0')
		return (0);
	*line = buff;
	free(buff);
	return (1);
}
