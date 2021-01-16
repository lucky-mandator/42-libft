/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:23:03 by saluru            #+#    #+#             */
/*   Updated: 2021/01/16 14:01:04 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*str;
	const char	*to_find;

	str = haystack;
	to_find = needle;
	if (*needle == '\0')
		return (char *)haystack;
	while (len-- > 0)
	{
		if (*to_find == '\0')
			return ((char *)(str - (to_find - needle)));
		if (*str == *to_find)
			to_find++;
		else
			to_find = needle;
		if (*str == '\0')
			break ;
		str++;
	}
	return (NULL);
}
