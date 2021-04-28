/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:13:37 by curtman           #+#    #+#             */
/*   Updated: 2020/02/25 21:46:53 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>

#define WIDTH 640
#define HEIGHT 480

typedef struct	s_data
{
		void	*mlx_ptr;
		void	*win_ptr;
		int		x;
		int		y;
}				t_data;

int		deal_key(int key, t_data *data)
{
	if (key == 53)
		exit(0);
	data->x = 0;
	while (data->x <= WIDTH)
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, data->x, data->y, 0x04B8D4);
		data->x += 1;
	}
	data->y += 1;
	if (data->y == HEIGHT + 1 && data->x == WIDTH + 1)
		mlx_string_put(data->mlx_ptr, data->win_ptr, 285, HEIGHT / 2, 0x000000, "BRAVO");
	return (0);
}

int		main(void)
{
	t_data	data;
	int		x;
	int		y;

	x = 0;
	data.y = 0;
	if ((data.mlx_ptr = mlx_init()) == NULL)
		return (1);
	if ((data.win_ptr = mlx_new_window(data.mlx_ptr, WIDTH, HEIGHT, "mlx_42")) == NULL)
		return (1);
	while (x < WIDTH)
	{
		y = 0;
		mlx_pixel_put(data.mlx_ptr, data.win_ptr, x, y, 0x70685B);
		while (y < HEIGHT)
		{
			mlx_pixel_put(data.mlx_ptr, data.win_ptr, x, y, 0x70685B);
			y++;
		}
		x++;
	}
	mlx_string_put(data.mlx_ptr, data.win_ptr, 275, HEIGHT / 2, 0x000000, "Hello friend!");
	mlx_key_hook(data.win_ptr, deal_key, &data);
	mlx_loop(data.mlx_ptr);
	return (0);
}
