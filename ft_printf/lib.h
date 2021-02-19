#ifndef LIB_H
# define LIB_H
# include <stdarg.h>
# include <unistd.h>

typedef struct s_st
{
	int	minus;
	int zero;
	int	dot;
	int	precision;
	int	width;
}				t_fields;


void	printchar(va_list args, t_fields *st);
void	printdigit(char c, va_list args, t_fields *st);
void	printstr(va_list args, t_fields *st);
char	*ft_anybase(unsigned long n, const char *base);
void	printhex(char c, va_list args, t_fields *st);
void	check_flags(char **str, t_fields *st);
void	check_width(char **str, t_fields *st, va_list args);
void	check_precision(char **str, t_fields *st, va_list args);
void	printch(int quant, char ch);

#endif