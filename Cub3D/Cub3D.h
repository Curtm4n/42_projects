/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:43:03 by cdapurif          #+#    #+#             */
/*   Updated: 2020/02/27 17:14:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <stdlib.h>
# include "minilibx/mlx.h"

# define WIDTH 640
# define HEIGHT 480

typedef struct	s_img
{
		void	*img_ptr;
		char	*img;
		int		bpp;
		int		l_size;
		int		endian;
		int		x;
		int		y;
}				t_img;

typedef struct	s_data
{
		void	*mlx_ptr;
		void	*win_ptr;
		t_img	img;
}				t_data;

#endif
