#include "lib.h"

int		checkmalloc(char *line)
{
	int i;

	i = 0;
	while (line[i] != ' ' && line[i])
	{
		i++;
	}
	return (i);
}

static	int	resxy(char **line, t_mapdata *data)
{
	int		i;
	char	*str1;
	int		count1;
	int 	num;

	i = 0;
	skipspaces(line);
	count1 = checkmalloc(*line);
	if (!(str1 = malloc(sizeof(char) * (count1 + 1))))
		return (-1);
	while (**line != ' ' && **line)
	{
		str1[i] = **line;
		(*line)++;
		i++;
	}
	str1[i] = '\0';
	num = ft_atoi(str1);
	free(str1);
	return (num);
}

void	ft_res(char **line, t_mapdata *data, int *i)
{
	int	sizex;
	int	sizey;

	(*i)++;
	(*line)++;
	data->resx = resxy(line, data);
	data->resy = resxy(line, data);
}

int		ft_dir(char **line, char **st, int *l)
{
	char	*str;
	int 	count;
	int		i;

	(*l)++;
	i = 0;
	(*line)++;
	(*line)++;
	skipspaces(line);
	count = checkmalloc(*line);
	if (!(str = malloc(sizeof(char) * (count + 1))))
		return (-1);
	while (**line != ' ' && **line)
	{
		str[i] = **line;
		(*line)++;
		i++;
	}
	str[i] = '\0';
	*st = ft_strdup(str);
	free(str);
	str = NULL;
	return (1);
}

void	ft_color(char **line, int *st, int *l)
{
	int	i;
	int	rgb[3];
	
	(*l)++;
	i = 0;
	(*line)++;
	skipspaces(line);
	while (i < 3)
	{
		rgb[i] = getcolor(line);
		i++;
	}
	*st = createtrgb(rgb[0], rgb[1], rgb[2]);
}