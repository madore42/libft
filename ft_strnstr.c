/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:54:16 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 15:40:37 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates first occurence needle in haystack, not more than 'n' characters
 are searched*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char			c;
	unsigned int	i;
	size_t			needlelen;

	i = 0;
	c = *needle;
	needlelen = ft_strlen(needle);
	while (haystack && haystack[i] != '\0' && (i + needlelen) <= n)
	{
		if (ft_strncmp(((char *)&haystack[i]), needle, needlelen) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *)haystack);
	else
		return (NULL);
}
