/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:08:49 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/31 19:09:24 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	int				fd;
	char			*buff;
	struct s_list	*next;
}				t_list;

int				get_next_line(int fd, char **line);
char			*ft_get_line(t_list *ptr, int fd, char *line);

#endif
