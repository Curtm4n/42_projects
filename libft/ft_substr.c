/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:30:00 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/16 16:24:44 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*ret;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	size = i - start + 1;
	if ((ret = malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	if (start > (unsigned int)i - 1)
	{
		ret[0] = '\0';
		return (ret);
	}
	i = 0;
	while (i < len && i < size)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
