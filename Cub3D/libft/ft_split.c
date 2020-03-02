/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:16:25 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/22 14:14:49 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free_all(char **tab)
{
	int i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

static char		*ft_make_placement(char const *str, char c)
{
	int		i;
	int		len_str;
	char	*placement;

	i = 0;
	len_str = ft_strlen(str);
	if ((placement = malloc(len_str + 1)) == NULL)
		return (NULL);
	placement[len_str] = '\0';
	while (str[i])
	{
		placement[i] = '0';
		if (str[i] == c)
			placement[i] = '1';
		i++;
	}
	return (placement);
}

static int		ft_len_final(char *placement)
{
	int i;
	int nb_strs;
	int first;

	i = 0;
	nb_strs = 0;
	first = 1;
	while (placement[i])
	{
		if (placement[i] == '0' && first == 1)
		{
			nb_strs++;
			first = 0;
		}
		if (placement[i] == '1')
			first = 1;
		i++;
	}
	return (nb_strs);
}

static	char	**ft_make_tab(char *placement)
{
	char	**tab;
	int		i;
	int		len;
	int		j;
	int		nb_str;

	i = 0;
	j = 0;
	nb_str = ft_len_final(placement);
	if ((tab = (char**)malloc(sizeof(char*) * (nb_str + 1))) == NULL)
		return (NULL);
	tab[nb_str] = NULL;
	while (j < nb_str)
	{
		len = 0;
		while (placement[i] == '1')
			i++;
		while (placement[i++] == '0')
			len++;
		if ((tab[j] = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
			return (NULL);
		tab[j][len] = '\0';
		j++;
	}
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	char	*placement;
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = -1;
	if (!s || (placement = ft_make_placement(s, c)) == NULL)
		return (NULL);
	if ((tab = ft_make_tab(placement)) == NULL)
	{
		ft_free_all(tab);
		return (NULL);
	}
	while (++j < ft_len_final(placement))
	{
		while (placement[i] == '1')
			i++;
		k = 0;
		while (placement[i] == '0')
			tab[j][k++] = s[i++];
	}
	free(placement);
	return (tab);
}
