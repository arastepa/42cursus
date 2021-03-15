#ifndef LIB_H
#define LIB_H

#include <fcntl.h>
#include "get_next_line/get_next_line.h"
#include "libft/libft.h"
#include "mlx/mlx.h"

typedef	struct		s_data
{
	void	*img;
	char	*addr;
	int		bits;
	int		linel;
	int		endian;
}					t_data;	

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
}					t_mapdata;

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
void				drawmap(t_mapdata *data, void *mlx, void *win);
t_mapdata			readfile();

#endif
