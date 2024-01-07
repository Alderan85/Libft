/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fane <fane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:22:12 by fane              #+#    #+#             */
/*   Updated: 2024/01/05 16:41:29 by fane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int		ft_atoi( const char *str);
size_t		ft_strlen(const char *str);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s,int fd);
void		ft_putstr_fd(char *src, int fd);
char		*ft_strcpy(char *dest, const char *src);
void		*ft_memcpy(void *dst, const void *src, size_t n);
#endif
