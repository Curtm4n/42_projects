/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:37:23 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/21 18:37:51 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_loop(int fd, char *buff)
{
	
}

int		get_next_line(int fd, char **line)
{
	char	*buff;
	int		ret;
	int		len;

	if (fd < 0 || fd == 1 || fd == 2 || !line)
		return (-1);
	if ((buff = malloc(BUFFER_SIZE + 1)) = NULL)
		return (-1);
	if ((ret = read(fd, buff, BUFFER_SIZE)) == -1)
		return (-1);
	if (ret == 0)
	{
		free(buff);
		return (0);
	}
	buff[ret] = '\0';
	len = ft_read_line(buff);
	if (ret == BUFFER_SIZE && len == 0)
	{
		if ((buff = ft_read_loop(fd, buff)) == NULL)
		{
			free(buff);
			return (-1);
		}
	}
	buff = ft_gm_size(buff);
	*line = buff;
	free(buff);
	return (1);
}
