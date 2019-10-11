/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:27:29 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/11 11:14:13 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_strs(char const *str, char c)
{
	char	**strs;
	int		i;
	int		count_strs;

	i = 0;
	count_strs = 0;
	while (str[i])
	{
		if (str[i] != c)
			count_strs++;
		while (str[i] != c && str[i] != '\0')
			i++;
		while (str[i] == c)
			i++;
		if (str[i] == '\0' && str[i - 1] == c)
			count_strs--;
	}
	if ((strs = malloc(sizeof(char *) * count_strs + 1)) == NULL)
		return (NULL);
	strs[count_strs] = 0;
	return (strs);
}

char	*ft_malloc_str(char const *s, char c, int index)
{
	char	*str;
	int		i;
	int		a;

	i = 0;
	a = index;
	while (s[index] != c && s[index] != '\0')
	{
		index++;
		i++;
	}
	if ((str = malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	i = 0;
	while (s[a] != c && s[a] != '\0')
	{
		str[i] = s[a];
		a++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		a;

	i = 0;
	a = 0;
	strs = ft_create_strs(s, c);
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			strs[a] = ft_malloc_str(s, c, i);
			a++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c)
			i++;
	}
	return (strs);
}
