/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ehollidg <ehollidg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/05 11:42:30 by ehollidg       #+#    #+#                */
/*   Updated: 2019/06/05 14:29:06 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void 	setup_program(t_mlx *mlx)
{
	drawinfo(mlx, 0x66ff66);
	hookcontrols(mlx);
}

int		main(int argc, char **argv)
{
	t_mlx mlx;

	argv--;
	if (argc == 2)
	{
		mlx.info = mlx_init();
		mlx.win = mlx_new_window(mlx.info, 1280, 720, "The Bestest fTf in the worlds.");
		setup_program(&mlx);
		mlx_loop(mlx.info);
	}
	else
	{
		ft_putendl("Usage : ./fdf [Heightmap File]");
	}
}
