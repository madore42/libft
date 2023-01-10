/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:18:19 by madore            #+#    #+#             */
/*   Updated: 2023/01/10 15:35:39 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (dest && dest[i] != '\0' && i < n)
		i++;
	while (*src && i < n)
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
	printf("%d", ft_strlcat(dest, src, 15));
	return (0);
}