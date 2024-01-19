#ifndef LIBFT_H	
# define LIBFT_H
#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>

int		ft_atoi( const char *str);
int		ft_strlen(const char *str);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s,int fd);
void		ft_putstr_fd(char *src, int fd);
char		*ft_strcpy(char *dest, const char *src);
#endif
