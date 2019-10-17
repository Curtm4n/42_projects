/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:36:12 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/17 19:04:57 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew_mod(void *content)
{
	t_list	*new_elem;

	if ((new_elem = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

static void		ft_lstclear_mod(t_list *ptr, void (*del)(void *))
{
	t_list *tmp;

	while (ptr)
	{
		tmp = ptr->next;
		(*del)(ptr->content);
		free(ptr);
		ptr = tmp;
	}
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_elem;
	t_list	*prev;

	while (lst)
	{
		new_elem = ft_lstnew_mod((*f)(lst->content));
		if (!ptr)
			ptr = new_elem;
		if (!prev)
			prev = new_elem;
		else
			prev->next = new_elem;
		lst = lst->next;
		prev = new_elem;
		if (!new_elem)
		{
			ft_lstclear_mod(ptr, del);
			return (NULL);
		}
	}
	return (ptr);
}
