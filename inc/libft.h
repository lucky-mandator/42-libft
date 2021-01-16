/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 11:40:39 by saluru            #+#    #+#             */
/*   Updated: 2021/01/16 13:21:25 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <math.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove (void *dest, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t maxlen);
size_t	ft_strlen(const char *str);
void    *ft_bzero(void *s, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memset(void *dest, int letter, size_t size);
int     ft_strlcpy(char *dest, char *src, unsigned int size);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *s, int c);

#endif
