/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <cdapurif@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:31:50 by curtman           #+#    #+#             */
/*   Updated: 2021/04/27 00:10:34 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# define BUFFER_SIZE 128
# define WIDTH_MAX 2880
# define HEIGHT_MAX 1800

# include <stdio.h> //a degager

# include "libft/libft.h"
# include <mlx.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <math.h>

typedef struct	s_info
{
	void			*mlx_tmp_ptr;
	unsigned short	map_start;
	char			*no_texture;
	char			*so_texture;
	char			*we_texture;
	char			*ea_texture;
	char			*sprite_texture;
	int				width;
	int				height;
	char			orientation;
}				t_info;

t_info			*ft_parsing(char *map);
int				get_next_line(int fd, char **line);
int				ft_strlen(char *str);
int				check_line(char *str);
char			*ft_substr_free(char *s, int start, int len, int set);
char			*ft_strjoin_free(char *s1, char *s2, int free);
void			parsing_error(t_info *info);
void			free_info(t_info *info);
void			handle_map_line(char *line, t_info *info);
void			handle_info_line(char *line, t_info *info);
void			parsing_res(char *line, t_info *info);
void			parsing_text(char *line, t_info *info);

#endif
