/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:06:39 by madore            #+#    #+#             */
/*   Updated: 2023/01/16 14:48:53 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strmapi modifies a strign by applying a given function to each character in 
string function takes 2 arguments: first is pointer to the string that will be 
modified, second is a pointer to a function that will be applied to each
characters in string*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
