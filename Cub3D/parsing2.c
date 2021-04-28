/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <cdapurif@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 19:22:00 by curtman           #+#    #+#             */
/*   Updated: 2021/04/27 00:11:23 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	free_info(t_info *info)
{
	free(info);
}

void	parsing_error(t_info *info)
{
	free_info(info);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	handle_info_line(char *line, t_info *info)
{
	if (*line == 'R')
		parsing_res(line, info);
	if (*line == 'N' || *line == 'S' || *line == 'W' || *line == 'E')
		parsing_text(line, info);
	/*if (*line == 'F' || *line == 'C')
		parsing_color(line, info);*/
}

void	handle_map_line(char *line, t_info *info)
{
	(void)line;
	(void)info;
	ft_putstr_fd("map line\n", 1);
}
