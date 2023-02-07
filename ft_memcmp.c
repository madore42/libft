/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:08:33 by madore            #+#    #+#             */
/*   Updated: 2023/02/07 17:01:34 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*compare byte string s1 against byte string s2, both str are assumed to be
n bytes long. return zero if identical, otherwise returns difference
(treated as unsigned char values)*/
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	if (n == 0 || !str1 || !str2)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}
