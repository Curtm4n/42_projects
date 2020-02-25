/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:13:37 by curtman           #+#    #+#             */
/*   Updated: 2020/02/25 22:56:29 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>

#define WIDTH 640
#define HEIGHT 480

typedef struct	s_img
{

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
	int		x;
	int		y;

	if ((data.mlx_ptr = mlx_init()) == NULL)
		return (1);
	if ((data.win_ptr = mlx_new_window(data.mlx_ptr, WIDTH, HEIGHT, "mlx_42")) == NULL)
		return (1);
	mlx_new_image(data.mlx_ptr, WIDTH, HEIGHT);
	
	mlx_key_hook(data.win_ptr, close_window, (void *)0);
	mlx_loop(data.mlx_ptr);
	return (0);
}
