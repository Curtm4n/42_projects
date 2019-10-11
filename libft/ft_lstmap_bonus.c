/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:23:27 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/11 15:38:58 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list		*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

static void			ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr;

	ptr = *alst;
	if (!(ptr))
		*alst = new;
	else
	{
		while (ptr)
		{
			if (!(ptr->next))
				break ;
			ptr = ptr->next;
		}
		ptr->next = new;
	}
}

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	int		i;
	t_list	*ptr;
	t_list	*new_elem;
	t_list	**new_list;

	i = 0;
	ptr = lst;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	if ((new_list = malloc(sizeof(t_list *) * i)) == NULL)
		return (NULL);
	while (ptr)
	{
		new_elem = ft_lstnew((*f)(ptr->content));
		ft_lstadd_back(new_list, new_elem);
		ptr = ptr->next;
	}
	return (*new_list);
}
