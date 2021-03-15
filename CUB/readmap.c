#include "lib.h"
#include <stdio.h>

int		ft_count()
{
	int			fd;
	char		*line;
	int			t;
	int			i;

	i = 0;
	t = 1;	
	fd = open("map.cub", O_RDONLY);
	while (t)
	{
		t = get_next_line(fd, &line);
		skipspaces(&line);
		if (line[0] == '1')
			i++;
	}
	return (i);	
}

void	ft_map(char **line, t_mapdata *data)
{
	data->map[data->mapy] = ft_strdup(*line);
	*line += ft_strlen(*line);
	(data->mapy)++;	
}