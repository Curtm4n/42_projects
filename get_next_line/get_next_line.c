/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:37:23 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/22 17:49:52 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_loop(int fd, char *buff)
{
	char	*buff2;
	int		ret;
	int		len;

	len = 0;
	while (len == 0)
	{
		if ((buff2 = malloc(BUFFER_SIZE + 1)) == NULL)
			return (NULL);
		if ((ret = read(fd, buff2, BUFFER_SIZE)) == -1)
			return (NULL);
		buff2[ret] = 0;
		if ((buff = ft_strjoin_lines(buff, buff2)) == NULL)
			return (NULL);
		len = ft_read_line(buff);
	}
	return (buff);
}

int		get_next_line(int fd, char **line)
{
	char	*buff;
	int		ret;
	int		len;

	if (fd < 0 || fd == 1 || fd == 2 || !line)
		return (-1);
	if ((buff = malloc(BUFFER_SIZE + 1)) == NULL)
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
