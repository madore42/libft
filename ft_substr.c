/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:23:15 by madore            #+#    #+#             */
/*   Updated: 2023/02/05 12:56:38 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t			max;

	i = 0;
	max = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		max = 0;
	else if (start < ft_strlen(s))
		max = ft_strlen(s) - start;
	if (max > len)
		max = len;
	substr = (char *) ft_calloc(max + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (start < ft_strlen(s) && s[i] != '\0' && i < max)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
