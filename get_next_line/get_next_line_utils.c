/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:21:48 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/25 16:59:49 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_read_line(static char *buff, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (buff[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char		*ft_gm_size(static char *buff, int len)
{
	char	*new_str;
	int		i;

	if ((new_str = malloc(len + 2)) == NULL)
		return (NULL);
	new_str[len + 1] = '\0';
	i = -1;
	while (++i <= len)
		new_str[i] = buff[i];
	return (new_str);
}

char		*ft_realloc(static char buffer, char *buff_tmp, int ret)
{
	char	*new_str;

	if (!buff_tmp)
	{
		if ((new_str = malloc(ret)) == NULL)
			return (NULL);
		i = -1;
		while (++i <= ret)
			new_str[i] = buffer[i];
		return (new_str);
	}
	//malloc BUFFER_SIZE + ret (NO) / MAYBE sizeof(previous malloc) ?
}

char		*ft_get_line(int fd, static char buffer)
{
	char		*buff_tmp;
	int			len;
	int			ret;

	buff_tmp = NULL;
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		if ((len = ft_read_line(buffer, ret)) > 0)
			return (ft_gm_size(buffer, len));
		if ((buff_tmp = ft_realloc(buffer, buff_tmp, ret)) == NULL)
			return (NULL);
	}
	if (ret == -1)
		return (NULL);
	return (ft_gm_size(buffer));
}
