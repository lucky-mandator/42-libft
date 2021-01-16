/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:39:34 by saluru            #+#    #+#             */
/*   Updated: 2021/01/16 12:38:12 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;

	s = str;
	while (n-- > 0)
		if (*s++ == (char)c)
			return (void *)s;
	return (NULL);
}
