/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:13:37 by curtman           #+#    #+#             */
/*   Updated: 2020/02/27 14:04:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>

#define WIDTH 570
#define HEIGHT 922

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

int		close_window(int key, void *param)
{
	(void)param;
	if (key == 53)
		exit(0);
	return (0);
}

int		main(void)
{
	t_data	data;

	if ((data.mlx_ptr = mlx_init()) == NULL)
		return (1);
	if ((data.win_ptr = mlx_new_window(data.mlx_ptr, WIDTH, HEIGHT, "mlx_42")) == NULL)
		return (1);
	if ((data.img.img_ptr = mlx_xpm_file_to_image(data.mlx_ptr, "images/fsociety.xpm", &(data.img.x), &(data.img.y))) == NULL)
		return (1);
	mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img.img_ptr, 0, 0);
	mlx_key_hook(data.win_ptr, close_window, (void *)0);
	mlx_loop(data.mlx_ptr);
	return (0);
}
