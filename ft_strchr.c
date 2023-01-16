/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:00 by madore            #+#    #+#             */
/*   Updated: 2023/01/13 21:42:58 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	while (str && *str != '\0')
	{
		if (*str == (char)c)
			return(char *)str;
		str++;
	}
	if ((char)c == '\0')
		return(char *)str;
	else
		return (NULL);
	
}

#include <stdio.h>

int main(void)
{
	const char str[] = "bonjour";
	const char ch = 'j';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("%c\n%s", ch, ret);
	return (0);
}
