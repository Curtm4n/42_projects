/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:30:00 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/22 12:12:52 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
	char	*ret;

	if (!s)
		return (NULL);
	if (!s[0] || start > (unsigned int)ft_strlen(s) - 1)
	{
		if ((ret = malloc(1)) == NULL)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	i = start;
	while (i - start < len && s[i])
		i++;
	size = i - start;
	if ((ret = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	ret[size] = '\0';
	i = -1;
	while (++i < size)
		ret[i] = s[start + i];
	return (ret);
}
