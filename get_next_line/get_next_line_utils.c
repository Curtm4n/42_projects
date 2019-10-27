/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:20:09 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/27 12:32:04 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_check_line(char *line, int ret)
{
	int i;

	i = -1;
	while (++i < ret)
	{
		if (line[i] == '\n')
			return (i);
	}
	return (-1);
}

char		*ft_substr(char *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
	char	*ret;

	i = 0;
	while (s[i])
		i++;
	if (!s[0] || start > (unsigned int)i - 1)
	{
		if ((ret = malloc(1)) == NULL)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	i = start;
	while (i - start < len && s[i])
		i++;
	size = i - start;
	if ((ret = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	ret[size] = '\0';
	i = -1;
	while (++i < size)
		ret[i] = s[start + i];
	return (ret);
}

int		ft_get_line(t_list *ptr, int fd, char **line)
{
	int		total_read;
	int		len;
	int		ret;

	total_read = 0;
	if ((*line = malloc(BUFFER_SIZE)) == NULL)
		return (-1);
	while ((ret = read(fd, *line, BUFFER_SIZE)) > 0)
	{
		total_read += ret;
		if ((len = ft_check_line(*line)) >= 0)
		{
			if (ptr->buffer)
				if ((*line = ft_strjoin(ptr->buff, *line)) == NULL)
					return (-1);
			if ((ptr->buff = ft_substr(*line, len, BUFFER_SIZE)) == NULL)
				return (-1);
			return (1);
		}
		ft_strjoin(ptr->buff, *line);
	}
	return (0);
}
