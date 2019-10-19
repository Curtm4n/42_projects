/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:19:36 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/19 19:19:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strjoin(const char *s1, const char *s2)
{
	int		len_1;
	int		len_2;
	int		i;
	int		a;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	i = -1;
	if ((ret = malloc(sizeof(char) * len_1 + len_2 + 1)) == NULL)
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	a = 0;
	while (s2[a])
	{
		ret[i + a] = s2[a];
		a++;
	}
	ret[i + a] = '\0';
	free(s1);
	free(s2);
	return (ret);
}

int		ft_read_line(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}
