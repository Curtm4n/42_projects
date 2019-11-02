/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:11:38 by cdapurif          #+#    #+#             */
/*   Updated: 2019/11/02 16:32:45 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_list		*ft_lstnew(int fd)
{
	t_list	*new_elem;

	if ((new_elem = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new_elem->fd = fd;
	new_elem->eof = 0;
	new_elem->buff = NULL;
	new_elem->next = NULL;
	return (new_elem);
}

t_list		*ft_lst_foa(t_list *lst, int fd)
{
	t_list	*new;
	t_list	*tmp;

	tmp = lst;
	new = NULL;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	if ((new = ft_lstnew(fd)) == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

int			get_next_line(int fd, char **line)
{
	int				len;
	t_list			*ptr;
	static t_list	*elem;

	if (fd < 0 || !line)
		return (-1);
	if (!elem)
	{
		if ((elem = ft_lstnew(fd)) == NULL)
			return (-1);
	}
	if ((ptr = ft_lst_foa(elem, fd)) == NULL)
		return (-1);
	if (ptr->eof == 0)
		if ((*line = ft_get_line(ptr, fd, *line)) == NULL)
			return (-1);
	if (ptr->eof == 1)
		if (ptr->buff)
		{
			if ((len = ft_check_line(ptr->buff)) >= 0)
				if ((*line = ft_handle_ret(ptr, *line, len)) == NULL)
					return (-1);
			return (0);
		}
	return (1);
}
