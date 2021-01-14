/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saluru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:01:02 by saluru            #+#    #+#             */
/*   Updated: 2021/01/14 11:44:19 by saluru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strlcat(char *dest, char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	printf("flag");
	len = ft_len(dest);
	printf("%d",len);
	while (src[i] != '\0')
	{
		dest[len+i]	= src[i];
		printf("%d",len+i);
		i++;
	}
	*dest = '\0';
	return (dest);
}
int	f_strlcat(char * restrict dst, const char * restrict src, size_t maxlen) {
    const size_t srclen = strlen(src);
    const size_t dstlen = strnlen(dst, maxlen);
    if (dstlen == maxlen) return maxlen+srclen;
    if (srclen < maxlen-dstlen) {
        memcpy(dst+dstlen, src, srclen+1);
    } else {
        memcpy(dst+dstlen, src, maxlen-1);
        dst[dstlen+maxlen-1] = '\0';
    }
    return dstlen + srclen;
}
int	main(void)
{
	char str1[] = "SAaitanya";
	char str2[] = "aluru";
	printf("%lu %s %s",strlcat(str1, str2,5),str1,str2);

}
