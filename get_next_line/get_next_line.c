/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:32:20 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/06 18:15:49 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		check_line(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == '\n')
			return (1);
	}
	return (0);
}

int		ft_get_rest(char *buff, char **line)
{
	int a;
	int i;

	i = -1;
	while (buff[++i])
	{
		if (buff[i] == '\n')
			break ;
	}
	buff[i] = '\0';
	if ((*line = malloc(i + 1)) == NULL)
		return (-1);
	a = -1;
	while (++a <= i)
		*line[a] = buff[a];
	a = 0;
	while (buff[++i])
	{
		buff[a] = buff[i]
		a++;
	}
	buff[a] = '\0';
	return (1);
}

int		ft_read_line(int fd, char *buff, char **line)
{
	int		ret;

	while ((ret = read(fd, ))
}

int		get_next_line(int fd, char **line)
{
	static char buff[BUFFER_SIZE + 1];

	buff[BUFFER_SIZE] = '\0';
	if (fd < 0 || !line)
		return (-1);
	if (ft_check_line(buff))
		return (ft_get_rest(buff, line));
	ft_read_line(fd, buff, line);
}
