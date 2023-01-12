/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:54:16 by madore            #+#    #+#             */
/*   Updated: 2023/01/12 13:11:24 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char c = *needle;
	unsigned int i;
	
	i = 0;
	while (haystack && haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == (char)c)
			return((char *)&haystack[i]);
		i++;
	}
	if ((char)c == '\0')
		return(char *)haystack;
	else
		return (NULL);
	
}

#include <stdio.h>

int	main(void)
{
	char *str;
	char *to_find;

	str = "salut ca va";
	to_find = "ca";
	printf("%s", ft_strnstr(str, to_find, 8));
}