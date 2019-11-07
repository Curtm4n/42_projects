/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:32:20 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/07 16:57:03 by cdapurif         ###   ########.fr       */
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
			return (i);
	}
	return (-1);
}

int		ft_get_rest(char *buff, char **line, int start)
{
	int a;
	int i;

	i = -1;
	while (buff[++i])
		if (buff[i] == '\n')
			break ;
	buff[i] = '\0';
	//separation
	if ((*line = malloc(i + 1)) == NULL)
		return (-1);
	a = -1;
	while (++a <= i)
		*line[a] = buff[a];
	a = 0;
	//separation
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
	char	*str;
	int		r;

	str = NULL;
	if (buff && buff[0] != '\0')
		if ((str = ft_substr(buff, 0, ft_strlen(buff))) == NULL)
			return (-1);
	while ((r = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[r] = '\0';
		if ((r = ft_check_line(buff)) >= 0)
		{
			if ((*line = ft_substr(buff, 0, r)) == NULL)
				return (-1);
			buff = ft_get_rest(buff, line, 1);
			if (str)
				if ((*line = ft_strjoin(str, *line, 1)) == NULL)
					return (-1);
			return (1);
		}
		if ((str = ft_strjoin(str, buff, 0)) == NULL)
			return (-1);
	}
	return (r);
}

int		get_next_line(int fd, char **line)
{
	static char buff[BUFFER_SIZE + 1] = NULL;
	int			ret;

	if (fd < 0 || !line)
		return (-1);
	if (buff && (ft_check_line(buff) >= 0))
		return (ft_get_rest(buff, line, 0));
	if ((ret = ft_read_line(fd, buff, line)) == -1)
		return (-1);
	if (ret == 1)
}
