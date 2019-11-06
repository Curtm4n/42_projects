/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:32:20 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/06 22:54:32 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	char	str[BUFFER_SIZE + 1];
	int		ret;

	*line = ft_substr()
	while ((ret = read(fd, str, BUFFER_SIZE)) > 0)
	{
		if (ft_check_line(str))
		{
			
		}
		*line = ft_strjoin(*line, str);
	}
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
