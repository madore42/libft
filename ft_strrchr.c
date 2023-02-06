/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:28:27 by maureen           #+#    #+#             */
/*   Updated: 2023/02/06 15:43:19 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates last occurence of c(converted to char) in str*/
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char) c)
			return ((char *) &str[i]);
		i--;
	}
	return (0);
}
