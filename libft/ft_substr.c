/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:30:00 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/20 14:25:31 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
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
	while ((size_t)i < len && i < size)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
