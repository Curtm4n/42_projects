/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:25:31 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/22 12:28:27 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_find_start(char const *s1, char const *set)
{
	int i;
	int a;

	i = 0;
	while (s1[i])
	{
		a = 0;
		while (set[a])
		{
			if (set[a] == s1[i])
				break ;
			a++;
		}
		if (set[a] == '\0')
			return (i);
		i++;
	}
	return (0);
}

static int		ft_find_end(char const *s1, char const *set)
{
	int i;
	int a;

	i = 0;
	while (s1[i])
		i++;
	i--;
	while (i >= 0)
	{
		a = 0;
		while (set[a])
		{
			if (set[a] == s1[i])
				break ;
			a++;
		}
		if (set[a] == '\0')
			return (i);
		i--;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		size;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (end <= start)
	{
		if ((str = malloc(1)) == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	size = end - start + 2;
	if ((str = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
