/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:36:17 by saluru            #+#    #+#             */
/*   Updated: 2021/01/18 13:01:03 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = count;
	tab = malloc(size * len);
	while (count-- > 0)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
