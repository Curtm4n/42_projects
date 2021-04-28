/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <cdapurif@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:05:32 by curtman           #+#    #+#             */
/*   Updated: 2021/04/27 00:11:00 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	parsing_res(char *line, t_info *info)
{
	int	i;

	i = 0;
	line++;
	while (line[i] && (line[i] == 32 || (line[i] >= '0' && line[i] <= '9')))
		i++;
	if (line[i] != '\0')
		parsing_error(info);
	info->width = fmin(ft_atoi(line), WIDTH_MAX);
	while (*line == 32)
		line++;
	while (*line >= '0' && *line <= '9')
		line++;
	info->height = fmin(ft_atoi(line), HEIGHT_MAX);
}

void	parsing_text(char *line, t_info *info)
{
	(void)line;
	(void)info;
}
