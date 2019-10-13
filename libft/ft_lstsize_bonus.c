/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:29:11 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/13 17:30:41 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		cpt;

	cpt = 0;
	ptr = lst;
	while (ptr)
	{
		ptr = ptr->next;
		cpt++;
	}
	return (cpt);
}
