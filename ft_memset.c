/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:42:02 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 14:15:15 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*writes len bytes of value c(converted to unisgned char) to the string h,
function returns its first argument*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (b);
}
