/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:34:53 by madore            #+#    #+#             */
/*   Updated: 2023/02/05 15:44:36 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates first occurence of c(converted to unsigned char) in string s*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	if (n == 0)
		return (NULL);
	while (s && n > 0)
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}
