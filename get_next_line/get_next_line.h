/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:58:42 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/24 13:01:31 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_struct
{
	
}				t_struct;

int		get_next_line(int fd, char **line);
int		ft_read_line(char *buff);
char	*ft_gm_size(char *buff);
char	*ft_strjoin_lines(char *s1, char *s2);

#endif
