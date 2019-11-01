/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:20:09 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/01 21:24:14 by cdapurif         ###   ########.fr       */
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

char		*ft_strjoin(char *s1, char *s2)
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
	if ((ret = malloc(sizeof(char) * (i + ft_strlen(s2) + 1))) == NULL)
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

char		*ft_handle_ret(t_list *ptr, char *line, int len)
{
	if (ptr->buff != NULL)
	{
		if ((line = ft_substr(ptr->buff, 0, len)) == NULL)
			return (NULL);
		if ((ptr->buff = ft_substr(ptr->buff, len + 1, BUFFER_SIZE)) == 0)
			return (NULL);
		return (line);
	}
	else
	{
		if ((ptr->buff = ft_substr(line, len + 1, BUFFER_SIZE)) == NULL)
			return (NULL);
		line[len] = '\0';
		return (line);
	}
}

char		*ft_get_line(t_list *ptr, int fd, char *line)
{
	int		len;
	int		ret;

	if (ptr->buff != NULL)
		if ((len = ft_check_line(ptr->buff)) >= 0)
			return (line = ft_handle_ret(ptr, line, len));
	if ((line = malloc(BUFFER_SIZE + 1)) == NULL)
		return (NULL);
	while ((ret = read(fd, line, BUFFER_SIZE)) > 0)
	{
		line[ret] = '\0';
		if (ptr->buff != NULL)
			if ((line = ft_strjoin(ptr->buff, line)) == NULL)
				return (NULL);
		ptr->buff = NULL;
		if ((len = ft_check_line(line)) >= 0)
			return (line = ft_handle_ret(ptr, line, len));
		if ((ptr->buff = ft_strjoin(ptr->buff, line)) == NULL)
			return (NULL);
	}
	if (ret == 0)
		ptr->eof = 1;
	return ((ret == -1) ? NULL : ptr->buff);
}
