/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:10:13 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/19 10:47:39 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;
	t_list *tmp;

	if (!lst || !del)
		return ;
	ptr = *lst;
	*lst = NULL;
	while (ptr)
	{
		tmp = ptr->next;
		(*del)(ptr->content);
		free(ptr);
		ptr = tmp;
	}
}
