/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:12:50 by saluru            #+#    #+#             */
/*   Updated: 2021/01/19 14:46:53 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int x)
{
	int	i;

	i = 0;
	if(!x)
		return (1);
	while (x != 0)
	{
		x /= 10;
		i++;
	}
	return i;
}

char		*ft_itoa(int n)
{
	char	*str;
	int		c;
	int		len;

	len = ft_intlen(n);
	if(n < 0)
		len = len + 1;
	str = malloc(sizeof(char) * (len + 1 ));
	if(!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		c = n % 10;
		*str++ = c + 48;
		n = n / 10;
		len--;
	}
	return (str);
}
