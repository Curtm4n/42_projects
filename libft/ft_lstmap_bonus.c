/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:23:27 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/13 16:05:05 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *))
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
