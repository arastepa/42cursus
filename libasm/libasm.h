#ifndef LIB_H
#define LIB_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_read(int fildes, const void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);

#endif