/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:30:00 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/14 19:37:25 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*ret;

	i = 0;
	while (s[i])
		i++;
	size = i - start + 1;
	if (start > i)
		return ("");
	if ((i - start + 1) <= len)
	{
		if ((ret = malloc(i - start + 1)) == NULL)
			return (NULL);
	}
	else
	{
		if ((ret = malloc(sizeof(char) * len)) == NULL)
			return (NULL);
	}
	i = 0;
	while (i < len && i < size)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
