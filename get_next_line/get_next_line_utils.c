/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:20:09 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/31 20:20:41 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_check_line(char *line)
{
	int i;

	i = -1;
	while (line[++i])
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

char		*ft_strjoin(char *s1, char *s2, int len_s2)
{
	int		i;
	int		a;
	char	*ret;

	i = 0;
	if (!s2 || s2[0] == '\0')
		return (NULL);
	if (s1)
		while (s1[i])
			i++;
	if ((ret = malloc(sizeof(char) * (i + len_s2 + 1))) == NULL)
		return (NULL);
	i = 0;
	if (s1)
	{
		i = -1;
		while (s1[++i])
			ret[i] = s1[i];
	}
	a = -1;
	while (s2[++a])
		ret[i + a] = s2[a];
	ret[i + a] = '\0';
	free(s1);
	return (ret);
}

char		*ft_get_line(t_list *ptr, int fd, char *line)
{
	int		total_length;
	int		len;
	int		ret;

	total_length = 0;
	while ((ret = read(fd, line, BUFFER_SIZE)) > 0)
	{
		total_length += ret;
		line[ret] = '\0';
		if (ptr->buff != NULL)
			if ((line = ft_strjoin(ptr->buff, line, ret)) == NULL)
			{
				ptr->buff = NULL;
				return (NULL);
			}
		line[total_length] = '\0';
		if ((len = ft_check_line(line)) >= 0)
		{
			if ((ptr->buff = ft_substr(line, len, BUFFER_SIZE)) == NULL)
				return (NULL);
			line[len] = '\0';
			return (line);
		}
		if ((ptr->buff = ft_strjoin(ptr->buff, line, total_length)) == NULL)
			return (NULL);
	}
	return (NULL);
}
