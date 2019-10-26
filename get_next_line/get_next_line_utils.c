/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:20:09 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/26 19:37:32 by cdapurif         ###   ########.fr       */
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

	if (!s)
		return (NULL);
	if (!s[0] || start > (unsigned int)ft_strlen(s) - 1)
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
	int		len;
	int		ret;

	if ((*line = malloc(BUFFER_SIZE)) == NULL)
		return (-1);
	while ((ret = read(fd, *line, BUFFER_SIZE)) > 0)
	{
		if ((len = ft_check_line(*line)) >= 0)
		{
			if ((ptr->ft_substr()
		}
		ft_strjoin(ptr->buff, *line, len);
	}
	return (0);
}
