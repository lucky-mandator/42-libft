/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:50:36 by saluru            #+#    #+#             */
/*   Updated: 2021/01/19 13:58:17 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	unsigned int		i;
	size_t				len;

	i = 0;
	len = 0;
	if (!dest || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && --size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[len])
		len++;
	return (len);
}
