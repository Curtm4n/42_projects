/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:53:44 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/20 18:58:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen_lines(const char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin_lines(char *s1, char *s2)
{
	int		len_1;
	int		len_2;
	int		i;
	int		a;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen_lines((const char *)s1);
	len_2 = ft_strlen_lines((const char *)s2);
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

int		ft_read_line(char *buff)
{
	int i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char	*ft_gm_size(char *buff)
{
	char	*new_str;
	int		i;

	i = 0;
	while (buff[i])
		i++;
	if ((new_str = malloc(i + 1)) == NULL)
		return (NULL);
	i = -1;
	while (buff[++i])
		new_str[i] = buff[i];
	new_str[i] = '\0';
	free(buff);
	return (new_str);
}
