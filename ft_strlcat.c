/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:18:19 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 15:32:02 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*return initial length of dst plus lenght of src*/
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
