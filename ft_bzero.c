/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:57:43 by madore            #+#    #+#             */
/*   Updated: 2023/01/10 12:22:41 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i++] = 0;
	}
	return (s);
}

#include <stdio.h>

int main(void)
{
	char str[30] = "Abcdefg hihi";
	ft_bzero(str, 3);
	int j = 0;
	while (j < 30)
	{
		printf("%c", str[j]);
		j++;
	}
	printf("\n");
	printf("Before bzero => %s", str);
	ft_bzero(str, 3);
	printf("\nAfter bzero => %s\n", str);
	return (0);
}