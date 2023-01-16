/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:13:29 by madore            #+#    #+#             */
/*   Updated: 2023/01/16 14:13:59 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	else if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n--;
		}
	}
	else
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	return (dest);
}
/*
int main(void)
{
	char src[] = "newstring";
	char dest[]= "oldstr";
	ft_memmove(dest, src, 9);
	printf("%s", dest);
	return (0);
}*/