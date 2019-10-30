/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:11:38 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/30 18:50:18 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		ft_lstadd_back(t_list *ptr, t_list *new)
{
	t_list	*tmp;

	tmp = ptr;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

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

t_list		*ft_lstiter(t_list *lst, int fd)
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
	ft_lstadd_back(lst, new);
	return (new);
}

int			get_next_line(int fd, char **line)
{
	int				ret;
	t_list			*ptr;
	static t_list	*elem;

	if (fd < 0 || !line)
		return (-1);
	if (!elem)
	{
		if ((elem = ft_lstnew(fd)) == NULL)
			return (-1);
	}
	if ((ptr = ft_lstiter(elem, fd)) == NULL)
		return (-1);
	if ((*line = malloc(BUFFER_SIZE + 1)) == NULL)
		return (-1);
	if ((ret = ft_get_line(ptr, fd, *line)) == 0)
		return (0);
	printf("en sortie de ft_get_line : %s\n\n", *line);
	if (ret == -1)
		return (-1);
	return (1);
}
