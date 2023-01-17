/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:18:19 by madore            #+#    #+#             */
/*   Updated: 2023/01/17 16:51:47 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (0);
	while (dest && dest[i] != '\0')
		i++;
	if (n <= i)
		return(ft_strlen(src) + n);
	while (*src && i < (n - 1))
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (i);
}

#include <stdio.h>

int main(void)
{
	char src[] = "allo";
	char dest[] = "coucou";
	printf("%zu", ft_strlcat(dest, src, 6));
	return (0);
}