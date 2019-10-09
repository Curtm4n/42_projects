/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:31:33 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/09 20:22:40 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_tab(long nb, int i, char *tmp)
{
	char *ret;

	while (nb > 0)
	{
		tmp[i] = nb % 10;
		nb / 10;
		i--;
	}
	tmp[i] = '\0'
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*ret;
	char	tmp[11];

	nb = n;
	i = 10;
	if (nb < 0)
	{
		tmp[i] = '-';
		nb *= -1;
		i--;
	}
	if (nb == 0)
	{
		if ((ret = malloc(1)) == NULL)
			return (NULL);
		ret[0] = '0';
	}
	if (nb > 0)
		ret = ft_tab(nb, i, tmp);
	return (ret);
}
