/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:22:12 by fane              #+#    #+#             */
/*   Updated: 2024/01/10 17:38:41 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi( const char *str);
void	*ft_bzero(void *b, size_t len);

int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s,int fd);
void	ft_putstr_fd(char *src, int fd);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif
