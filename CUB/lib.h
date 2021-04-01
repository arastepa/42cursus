#ifndef LIB_H
#define LIB_H

#include <fcntl.h>
#include "get_next_line/get_next_line.h"
#include "libft/libft.h"
#include "mlx/mlx.h"
#include <math.h>
#include <stdlib.h>

typedef	struct		s_data
{
	void	*img;
	char	*addr;
	int		bits;
	int		linel;
	int		endian;
}					t_data;

typedef	struct		s_tex
{
	void	*imge;
	void	*imgw;
	void	*imgn;
	void	*imgs;
	int		width;
	int		height;
	int 	texx;
	int 	texy;
	double 	step;
	double 	texpos;
	int 	*color;
}					t_tex;

typedef	struct		s_mapdata
{
	int		resx;
	int		resy;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	char	*sprite;
	char	*floor;
	char	*ceilling;
	char	**map;
	int		mapy;
	void 	*mlx;
	void 	*mlx_win;
}					t_mapdata;

typedef	struct		s_player
{
	double	x;
	double	y;
	char	dir;
	int 	mapx;
	int 	mapy;
	double	dirx;
	double	diry;
	double	planex;
	double	planey;
}					t_player;

typedef	struct		s_ray
{
	double 	camerax;
	double 	raydirx;
	double 	raydiry;
	double 	sidedistx;
	double 	sidedisty;
	double 	deldistx;
	double 	deldisty;
	double 	walldist;
	int 	stepx;
	int 	stepy;
	int 	hit;
	int 	side;
	int 	lineheight;
	int 	drawstart;
	int 	drawend;
}					t_ray;

typedef struct 		s_all
{
	t_ray		ray;
	t_player	pl;
	t_mapdata	data;
	t_tex		tex;
	t_data 		img;
}					t_all;

void				skipspaces(char **line);
void				ft_res(char **line, t_mapdata *data);
void				skipspaces(char **line);
void				ft_dir(char **line, char **st);
int					getcolor(char **line);
void				ft_color(char **line, char **st);
int					createtrgb(int r, int g, int b);
char				*ft_anybase(unsigned long n, const char *base);
void				ft_map(char **line, t_mapdata *data);
int					ft_count();
t_mapdata			readfile();
void				findplayer(t_mapdata *data, t_player *player);
void 				initpl(t_player *pl);
void 				initray(t_ray *ray);
void 				inittex(t_tex *tex);
void 				create_data(t_all *all);
void 				calcdistheight(t_all *all);
void				texture(t_all *all);
void				generate_textures(t_all *all);
void 				color(t_all *all);
void 				verline(t_all *all, int x);

#endif
