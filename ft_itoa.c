/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:12:50 by saluru            #+#    #+#             */
/*   Updated: 2021/01/20 14:50:10 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

static void	ft_rev(char *sptr)
{ 
    char *rptr;
    int i;
	int	j;

    i = -1;
	j = 0;
    rptr = malloc(sizeof(*sptr)*ft_strlen(sptr));
    while(*sptr)
    {
        sptr++;
        i++;
    }
    while(i >= 0)
    {
		sptr--;
        rptr[j] = *sptr;
        i--;
		j++;
    }
	rptr[j] = '\0';
    while(*rptr)
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
	int		i;
	int		minus;

	i = 0;
	len = ft_intlen(n);
	if(n < 0)
	{
		n = n * -1;
		len = len + 1;
		minus = 1;
	}
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		c = n % 10;
		str[i] = c + 48;
		n = n / 10;
		if (minus == 1 && len == 0)
			str[i] = 45;
		i++;
	}
	ft_rev(str);
	return (str);
}

int main(void)
{
	printf("%s",ft_itoa(-123));
}
