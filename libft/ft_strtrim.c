/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:25:31 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/11 16:30:24 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			if (set[a] == '\0')
				return (i);
			a++;
		}
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
	while (i >= 0)
	{
		a = 0;
		while (set[a])
		{
			if (set[a] == s1[i])
				break ;
			if (set[a] == '\0')
				return (i);
			a++;
		}
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
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	size = end - start + 2;
	if ((str = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}