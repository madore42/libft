/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:24:03 by madore            #+#    #+#             */
/*   Updated: 2023/01/13 21:46:29 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcpy(char *dest, const char *src,unsigned int size)
{
	unsigned int i;

	i = 0;
	if (src == NULL || dest == NULL)
		return (0);
	while (src[i] && i <= (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int main(void)
{
	char src[] = "coucou les pou";
	char dest[15];
	printf("%d", ft_strlcpy(dest, src, 20));
	return (0);
}*/