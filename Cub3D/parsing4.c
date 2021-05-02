/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 19:01:53 by cdapurif          #+#    #+#             */
/*   Updated: 2021/04/30 19:09:26 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_ismapchar(char *str)
{
	while (*str)
	{
		if (!ft_iswhitespace(*str) && *str != '0' && *str != '1' && *str != '2'
			&& *str != 'N' && *str != 'S' && *str != 'E' && *str != 'W')
			return (0);
		str++;
	}
	return (1);
}
