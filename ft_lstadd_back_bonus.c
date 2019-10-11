/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:45:24 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/10 20:07:05 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
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
