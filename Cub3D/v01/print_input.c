/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curtman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:13:37 by curtman           #+#    #+#             */
/*   Updated: 2020/02/25 16:34:22 by curtman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Take keyboard input while running and print the key number, quit when esc


#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>

#define WIDTH 640
#define HEIGHT 480

int		deal_key(int key, void *param)
{
	(void)param;
	if (key == 53)
		exit(0);
	printf("%d\n", key);
	return (0);
}

int		main(void)
{
	int		ret;
	int		x;
	int		y;
	void	*mlx_ptr;
	void	*win_ptr;

	x = 0;
	if ((mlx_ptr = mlx_init()) == NULL)
		return (1);
	if ((win_ptr = mlx_new_window(mlx_ptr, WIDTH, HEIGHT, "mlx_42")) == NULL)
		return (1);
	while (x < WIDTH)
	{
		y = 0;
		mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0x70685B);
		while (y < HEIGHT)
		{
			mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0x70685B);
			y++;
		}
		x++;
	}
	ret = mlx_string_put(mlx_ptr, win_ptr, 275, HEIGHT / 2, 0x000000, "Hello friend!");
	printf("%d\n", ret);
	mlx_key_hook(win_ptr, deal_key, (void *)0);
	mlx_loop(mlx_ptr);
	return (0);
}
