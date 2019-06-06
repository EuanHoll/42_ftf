/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fdfloop.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/05 14:54:23 by ehollidg       #+#    #+#                */
/*   Updated: 2019/06/06 15:57:44 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			fdfloop(void *param)
{
	t_mlx *mlx;

	mlx = (t_mlx *)param;
	//bcolour(mlx, LIGHT_BLUE);
	ft_bzero(mlx->img_add, SCREEN_VOL_BYTES);
	drawmap(mlx->map, mlx);
	mlx_put_image_to_window(mlx->info, mlx->win, mlx->img, 0, 0);
	drawinfo(mlx, LIME);
	return (1);
}