/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:21:48 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/24 13:02:44 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_read_line(char *buff, int len)
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
	static char	buffer[BUFFER_SIZE + 1] = "";

	if (buffer[0])
	{
		if ((ft_read_line(buffer)) == 0)
	}
//LA BOUCLE EST UNIQUEMENT LA POUR READ PLUSIEURS FOIS SI JAMAIS LE BUFFER NE PERMET PAS DE LIRE UNE LIGNE COMPLETE ET SE TERMINE QUAND NOUS RENVOYONS LA CHAINE OU EOF
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		if ((len = ft_read_line(buffer, ret)) > 0)
			ret_buff = ft_gm_size(buffer);
	}
	if (ret == -1)
		return (NULL);
	return (ft_gm_size(buffer));
}
