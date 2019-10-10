/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:21:29 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/10 18:42:27 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

char	**ft_create_strs(char const *s, char c)
{
	int		i;
	int		count_strs;
	char	**strs;

	i = 0;
	count_strs = 0;
	while (s[i])
	{
		if (s[i] == c && i != 0)
			count_strs++;
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (s[i] == '\0' && s[i - 1] == c)
			count_strs--;
	}
	if ((strs = malloc(sizeof(char *) * count_strs + 2)) == NULL)
		return (NULL);
	strs[count_strs + 1] = 0;
	return (strs);
}

char	*ft_fill_strs(const char *s, char c, int index)
{
	int		len_str;
	int		start;
	int		i;
	char	*str;

	i = 0;
	len_str = 0;
	start = index;
	while (s[index] != c && s[index++] != '\0')
		len_str++;
	printf("salut\n");
	if ((str = malloc(sizeof(char) * len_str + 1)) == NULL)
		return (NULL);
	while (start != index)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
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
			strs[a++] = ft_fill_strs(s, c, i);
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c)
			i++;
	}
	return (strs);
}
