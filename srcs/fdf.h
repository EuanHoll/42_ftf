/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fdf.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <lsmienk@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/05 12:39:44 by lsmienk        #+#    #+#                */
/*   Updated: 2019/06/06 11:48:37 by ehollidg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"
# include "keycodes.h"
# include "values.h"
# include <stdlib.h>
# include <math.h>
# include <stdio.h> //REMOVE

typedef struct	s_point
{
	double		x;
	double		y;
}				t_point;

typedef struct  s_map
{
    int     **map;
    size_t  map_size;
}               t_map;


typedef struct	s_mlx
{
	void *info;
	void *win;
	void *img;
	void *img_add;
}				t_mlx;

t_list			*read_file(int fd);
void			drawinfo(t_mlx *mlx, int colour);
void			hookcontrols(t_mlx *mlx);
int				closeprogram(void *param);
int				fdfloop(void *param);
int				inbounds(int x, int y);
void			plotpoint(int x, int y, int colour, void *img_add);
void			swap(void *i, void *j);
double			dlgradient(t_point *p0, t_point *p1, int steep);
double			fpart(double x);
double			rfpart(double x);
int				doubletocolour(double val);
void			drawline(t_point *p0, t_point *p1, t_mlx *mlx);
void			bcolour(t_mlx *mlx, int colour);

#endif