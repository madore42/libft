/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:14:02 by madore            #+#    #+#             */
/*   Updated: 2023/01/10 21:05:13 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_scan(char k, char c)
{
	if (k == c)
		return (1);
	return (0);
}

int findnbstr(char const *str, char c)
{
	int i;
	int countword;
	
	i = 0;
	countword = 0;
	while (str && str[i] != '\0')
	{
		while (str[i] != '\0' && ft_scan(str[i], c) == 1)
			i++;
		if (str[i] != '\0')
			countword++;
		while (str[i] != '\0' && ft_scan(str[i], c) == 0)
			i++;
	}
	return (countword);
}

int wordlen(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] && ft_scan(str[i], c) == 0)
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
		while (s && s[i] != '\0' && ft_scan(s[i], c) == 1)
			i++;
		split[j] = malloc(sizeof(char) * wordlen(&s[i], c) + 1);
		k = 0;
		while (s[i] != '\0' && ft_scan(s[i], c) == 0)
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