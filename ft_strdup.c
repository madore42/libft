/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:37:03 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 15:17:00 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*allocates memory for copy of src, does copy, returns a pointer to it.*/
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
