/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:19:08 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/26 12:18:14 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char *buffer = NULL;
	char		*buff;

	if (fd < 0 || !line)
		return (-1);
	if (!buffer)
	{
		if ((buffer = malloc(BUFFER_SIZE)) == NULL)
			return (-1);
	}
	else if ((buff = ft_handle_buffer_rest(buffer)) == NULL) //revoir condition
		return (-1);
	if ((buff = ft_get_line(fd, buffer)) == NULL) //verifier de ne pas appeler cette fonction si appel de la fonction precedente
		return (-1);
	if (buff[0] == '\0') //normalement bon car si appel apres EOF la fonction gm_size va placer un '\0' automatiquement, possiblement utiliser une variable EOF dans struct
		return (0);
	*line = buff;
	free(buff);
	return (1);
}
