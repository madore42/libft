/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:28:55 by madore            #+#    #+#             */
/*   Updated: 2023/01/20 14:41:02 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char) s1[i] - s2[i]);
	else
		return (0);
}

// int	main(void)
// {
// 	char s1[] = "bonnour";
// 	char s2[] = "bonzour";

// 	return(ft_strncmp(s1, s2, 4));
// }