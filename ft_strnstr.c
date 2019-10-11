/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:57:04 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/09 10:28:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t a;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		a = 0;
		while (haystack[i + a] == needle[a] && (i + a) < len)
		{
			if (needle[a] == '\0')
				return ((char *)haystack + i);
			a++;
		}
		i++;
	}
	return (NULL);
}
