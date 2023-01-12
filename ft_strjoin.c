/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:27 by madore            #+#    #+#             */
/*   Updated: 2023/01/12 15:10:15 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int	findsize(int size, char **str, char *sep)
{
	int	seplen;
	int	strlen;
	int	i;

	i = 0;
	strlen = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		strlen = strlen + ft_strlen(str[i++]);
	}
	return (strlen + seplen * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		joinlen;
	int		i;
	int		j;

	if (size == 0)
		return (malloc(sizeof(char) * 1));
	join = malloc(sizeof(char) * (findsize(size, strs, sep) + 1));
	if (join == NULL)
		return (NULL);
	i = -1;
	joinlen = 0;
	while (++i < size && strs[i])
	{
		j = 0;
		while (strs[i][j] != '\0')
			join[joinlen++] = strs[i][j++];
		if (i < size -1)
		{
			j = 0;
			while (sep && sep[j])
				join[joinlen++] = sep[j++];
		}
	}
	join[joinlen] = '\0';
	return (join);
}

#include <stdio.h>

int main(void)
{
	char *strs[] = {"allo", "bonjour ", "coucou"};
	char s[] = "TEST";
	char *s1 = ft_strjoin(3, strs, s);
	printf("%s\n", s1);
}

