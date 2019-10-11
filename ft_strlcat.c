/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 23:58:38 by cdapurif          #+#    #+#             */
/*   Updated: 2019/07/08 18:04:45 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;
	unsigned int len_src;

	i = 0;
	a = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (dest[i] && i < size)
		i++;
	while (src[a] && a < (size - i - 1) && i != size)
	{
		dest[i + a] = src[a];
		a++;
	}
	if (i < size)
		dest[i + a] = '\0';
	return (len_src + i);
}
