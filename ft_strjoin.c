/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:27 by madore            #+#    #+#             */
/*   Updated: 2023/01/22 15:57:34 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	find_strlen(char const *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str && str[i] != '\0')
// 		i++;
// 	return (i);
// }

// static int	findsize(char const *str, char const *sep)
// {
// 	int	seplen;
// 	int	strlen;
// 	int	i;

// 	i = 0;
// 	strlen = 0;
// 	seplen = find_strlen(sep);
// 	while (str && str[i] != '\0')
// 	{
// 		strlen = strlen + find_strlen(&str[i++]);
// 	}
// 	return (strlen + seplen);
// }

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*join;
// 	int		joinlen;
// 	int		i;
// 	int		j;
// 	int		size;
	
// 	size = findsize(s1, s2);
// 	join = malloc(sizeof(char) * (size + 1));
// 	if (join == NULL)
// 		return (NULL);
// 	i = -1;
// 	joinlen = 0;
// 	while (++i < size && s1[j])
// 	{
// 		j = 0;
// 		while (s1[j] != '\0')
// 			join[joinlen++] = s1[j++];
// 		if (i < size -1)
// 		{
// 			j = 0;
// 			while (s2 && s2[j])
// 				join[joinlen++] = s2[j++];
// 		}
// 	}
// 	join[joinlen] = '\0';
// 	return (join);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char const strs[] = {"allo", "bonjour ", "coucou"};
// 	char const s[] = "TEST";
// 	char const *s1 = ft_strjoin(strs, s);
// 	printf("%s\n", s1);
// }