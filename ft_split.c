/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:14:02 by madore            #+#    #+#             */
/*   Updated: 2023/02/07 14:56:22 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findnbstr(char const *str, char c)
{
	int	i;
	int	countword;

	i = 0;
	countword = 0;
	while (str && str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			countword++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (countword);
}

static int	wordlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	freeandquit(char **s, int i)
{
	int	j;

	j = 0;
	if (s[i])
		return (0);
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(s);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		j;
	int		i;
	int		k;

	split = malloc(sizeof(char *) * (findnbstr(s, c) + 1));
	if (split == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < findnbstr(s, c))
	{
		while (s && s[i] != '\0' && s[i] == c)
			i++;
		split[j] = malloc(sizeof(char) * wordlen(&s[i], c) + 1);
		if (freeandquit(split, j))
			return (NULL);
		k = 0;
		while (s[i] != '\0' && s[i] != c)
			split[j][k++] = s[i++];
		split[j++][k] = '\0';
	}
	split[j] = 0;
	return (split);
}
