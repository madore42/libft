/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:27 by madore            #+#    #+#             */
/*   Updated: 2023/01/16 14:40:11 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

static int	findsize(char **str, char *sep)
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		joinlen;
	int		i;
	int		j;

	join = malloc(sizeof(char) * (findsize(s1, s2) + 1));
	if (join == NULL)
		return (NULL);
	i = -1;
	joinlen = 0;
	while (++i < size && s1[i])
	{
		j = 0;
		while (s1[i][j] != '\0')
			join[joinlen++] = s1[i][j++];
		if (i < size -1)
		{
			j = 0;
			while (s2 && s2[j])
				join[joinlen++] = s2[j++];
		}
	}
	join[joinlen] = '\0';
	return (join);
}
/*
int main(void)
{
	char *strs[] = {"allo", "bonjour ", "coucou"};
	char s[] = "TEST";
	char *s1 = ft_strjoin(strs, s);
	printf("%s\n", s1);
}*/