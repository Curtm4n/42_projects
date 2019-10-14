/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:23:27 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/14 20:26:22 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	int		i;
	t_list	*ptr;
	t_list	*new_elem;

	i = 0;
	ptr = lst;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	if ((new_elem = malloc(sizeof(t_list) * i)) == NULL)
		return (NULL);
	i = 0;
	while (ptr->next)
	{
		(new_elem + i)->content = (*f)(ptr->content);
		(new_elem + i)->next = (new_elem + i + 1);
		ptr = ptr->next;
		i++;
	}
	(new_elem + i)->content = (*f)(ptr->content);
	(new_elem + i)->next = NULL;
	return (new_elem);
}
