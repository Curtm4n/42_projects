/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:21:48 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/23 19:16:17 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_read_line(char *buff)
{
	int i;

	i = 0;
	while (i < BUFFER_SIZE)
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

char	*ft_get_line(int fd)
{
	char		*ret_buff;
	int			len;
	int			ret;
	static char	buffer[BUFFER_SIZE] = "";

	if (buffer[0])
	{
		if ((ft_read_line(buffer)) == 0)
	}
	while (1)
	{
		if ((ret = read(fd, buffer, BUFFER_SIZE)) == -1)
			return (NULL);
		if ((len = ft_read_line(buffer)) > 0)
		{
			ret_buff = ft_gm_size(buffer);
			return (ret_buff);
		}
		if ((buffer2 = malloc(BUFFER_SIZE)) == NULL)
			return (NULL);
	}
}
