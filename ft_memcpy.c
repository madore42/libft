/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:24:35 by madore            #+#    #+#             */
/*   Updated: 2023/01/13 21:40:28 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	i = 0;

	if (src == NULL || dest == NULL)
		return(NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[] = "allo coucou";
	char dest[30];

	ft_memcpy(dest, src, 6);
	printf("%s", dest);
	return (0);
}
