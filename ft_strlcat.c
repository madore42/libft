/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:18:19 by madore            #+#    #+#             */
/*   Updated: 2023/01/23 15:07:43 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst && dst[i] != '\0')
		i++;
	if (dstsize < i)
		return (ft_strlen(src) + dstsize);
	while (src[j] && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen(src) + i - j);
}

// #include <stdio.h>

// int main(void)
// {
// 	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char dest[] = "there is no stars in the sky";
// 	size_t max = ft_strlen(src) + ft_strlen(dest);
// 	printf("%zu", ft_strlcat(dest, src, max));
// 	return (0);
// }