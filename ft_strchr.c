/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:00 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 15:07:01 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates first occurence of c(converted to char) in string pointed by s.
terminating null character is part of string. return * to located character*/
char	*ft_strchr(const char *str, int c)
{
	while (str && *str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	else
		return (NULL);
}
