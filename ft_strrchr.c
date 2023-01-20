/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:28:27 by maureen           #+#    #+#             */
/*   Updated: 2023/01/20 16:43:23 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

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

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	const char str[] = "abbbbbbb";
// 	const char ch = 'a';
// 	char *ret;
// 	char *rot;

// 	ret = ft_strrchr(str, ch);
// 	printf("%s\n", ret);
// 	rot = strrchr(str, ch);
// 	printf("%s\n", rot);
// 	return (0);
// }