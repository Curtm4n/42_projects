/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:11:38 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/31 19:23:45 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list		*ft_lstnew(int fd)
{
	t_list	*new_elem;

	if ((new_elem = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new_elem->fd = fd;
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
	if ((*line = malloc(BUFFER_SIZE + 1)) == NULL)
		return (-1);
	if ((*line = ft_get_line(ptr, fd, *line)) == NULL)
		return (-1);
	printf("\nen sortie de fonction : %s\n\n", *line);
	return (1);
}
