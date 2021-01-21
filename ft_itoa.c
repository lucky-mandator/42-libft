/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:12:50 by saluru            #+#    #+#             */
/*   Updated: 2021/01/21 14:46:15 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rev(char *sptr)
{
	char	*rptr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	rptr = malloc(sizeof(*sptr) * ft_strlen(sptr));
	while (*sptr && sptr++)
		i++;
	while (i > 0)
	{
		sptr--;
		rptr[j] = *sptr;
		i--;
		j++;
	}
	rptr[j] = '\0';
	while (*rptr)
	{
		*sptr = *rptr;
		sptr++;
		rptr++;
	}
}

static int	ft_intlen(int x)
{
	int	i;

	i = 0;
	if (!x)
		return (1);
	while (x != 0)
	{
		x /= 10;
		i++;
	}
	return (i);
}

static void	ft_str_assing(int len, char *str, int minus, unsigned int n)
{
	unsigned int	c;

	while (len-- > 0)
	{
		c = n % 10;
		*str = c + 48;
		n = n / 10;
		if (minus == 1 && len == 0)
			*str = 45;
		str++;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		minus;

	len = ft_intlen(n);
	if (n < 0)
	{
		n = (unsigned int)(n * -1);
		len = len + 1;
		minus = 1;
	}
	else
		n = (unsigned int)n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	ft_str_assing(len, str, minus, n);
	ft_rev(str);
	return (str);
}
