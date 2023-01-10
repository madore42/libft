/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:42:02 by madore            #+#    #+#             */
/*   Updated: 2023/01/10 11:43:02 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (b);
}

#include <stdio.h>

int main(void)
{
	char str[30] = "Abcdefg hihi";
	printf("Before memset => %s", str);
	ft_memset(str, 'x', 3);
	printf("\nAfter memset => %s\n", str);
	return (0);
}