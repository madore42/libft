/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:34:19 by maureen           #+#    #+#             */
/*   Updated: 2023/01/11 16:07:37 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
