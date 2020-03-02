/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:05:03 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/19 18:09:01 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int tmp;
	int i;

	i = 0;
	tmp = -1;
	while (str[i])
	{
		if (str[i] == c)
			tmp = i;
		i++;
	}
	if (c == 0)
		return ((char *)str + i);
	if (tmp != -1)
		return ((char *)str + tmp);
	else
		return (0);
}
