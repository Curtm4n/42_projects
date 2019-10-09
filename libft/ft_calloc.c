/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:42:49 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/09 17:08:48 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	octets;

	octets = size * count;
	if ((ret = malloc(octets)) == NULL)
		return (NULL);
	return (ft_memset(ret, 0, octets));
}
