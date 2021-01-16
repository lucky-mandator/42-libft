/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:06:56 by saluru            #+#    #+#             */
/*   Updated: 2021/01/16 13:18:49 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*lasts;

	len = 0;
	while (*s++)
		len++;
	lasts = s + (len - 1);
	while (lasts--)
		if (*lasts == (char)c)
			return (void *)lasts;
	return (NULL);
}
