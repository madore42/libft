/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:37:03 by madore            #+#    #+#             */
/*   Updated: 2023/01/13 21:46:01 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	int		i;
	char	*dup;

	i = 0;
	size = 0;
	while (src && src[size] != '\0')
		size++;
	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strdup(argv[1]));
}*/