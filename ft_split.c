/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:14:02 by madore            #+#    #+#             */
/*   Updated: 2023/01/12 14:05:56 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int findnbstr(char const *str, char c)
{
	int i;
	int countword;
	
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

int wordlen(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char **split;
	int nbstr;
	int j;
	int i;
	int k;

	nbstr = findnbstr(s, c);
	split = malloc(sizeof(char *) * (nbstr + 1));
	if (split == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < nbstr)
	{
		while (s && s[i] != '\0' && s[i] == c)
			i++;
		split[j] = malloc(sizeof(char) * wordlen(&s[i], c) + 1);
		k = 0;
		while (s[i] != '\0' && s[i] != c)
		{
			split[j][k++] = s[i++];
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = 0;
	return (split);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	char **splity;
	int i;

	i = 0;
	if (argc == 2)
	{
		splity = ft_split(argv[1], 'B');
		while (splity[i])
			printf("%s\n", splity[i++]);
	}
}