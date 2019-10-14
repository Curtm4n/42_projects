/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:57:04 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/14 11:16:14 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t a;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		a = 0;
		while (haystack[i + a] == needle[a] && (i + a) < len)
			a++;
		if (needle[a] == '\0' || a == len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
