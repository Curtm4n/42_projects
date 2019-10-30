/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:20:09 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/30 19:00:46 by cdapurif         ###   ########.fr       */
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

int		ft_check_line(char *line)
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

char	*ft_strjoin(char *s1, char *s2, int len_s2)
{
	int		len_1;
	int		i;
	int		a;
	char	*ret;

	len_1 = 0;
	if (!s2 || s2[0] == '\0')
		return (NULL);
	if (s1)
		len_1 = ft_strlen(s1);
	if ((ret = malloc(sizeof(char) * (len_1 + len_s2 + 1))) == NULL)
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

int		ft_get_line(t_list *ptr, int fd, char *line)
{
	int		len;
	int		ret;

	while ((ret = read(fd, line, BUFFER_SIZE)) > 0)
	{
		line[ret] = '\0';
		if (ptr->buff)
			if ((line = ft_strjoin(ptr->buff, line, ret)) == NULL)
				return (-1);
		if ((len = ft_check_line(line)) >= 0)
		{
			if ((ptr->buff = ft_substr(line, len, BUFFER_SIZE)) == NULL)
				return (-1);
			printf("\nptr->buff == %s\n", ptr->buff);
			if ((line = ft_substr(line, 0, len)) == NULL)
				return (-1);
			printf("juste avant de sortir de ft_get_line : %s\n", line);
			return (1);
		}
		if ((ptr->buff = ft_strjoin(ptr->buff, line, ret)) == NULL)
			return (-1);
	}
	return (ret);
}
