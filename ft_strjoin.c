/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:08:27 by madore            #+#    #+#             */
/*   Updated: 2023/02/07 14:21:21 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findsize(char const *str, char const *sep)
{
	int	seplen;
	int	strlen;

	strlen = ft_strlen(str);
	seplen = ft_strlen(sep);
	return (strlen + seplen);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		joinlen;
	int		i;
	int		j;
	int		size;

	size = findsize(s1, s2);
	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * (size + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	joinlen = 0;
	while (i < size && s1[i] != '\0')
		join[joinlen++] = s1[i++];
	j = 0;
	while (i < size && s2 && s2[j])
	{
		join[joinlen++] = s2[j++];
		i++;
	}
	join[joinlen] = '\0';
	return (join);
}
