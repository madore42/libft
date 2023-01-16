/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:28:27 by maureen           #+#    #+#             */
/*   Updated: 2023/01/13 21:49:51 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	while (str && *str != '\0')
		str++;
	while (str)
	{
		if (*str == (char)c)
			return(char *)str;
		str--;
	}
	if ((char)c == '\0')
		return(char *)str;
	else
		return (NULL);
}
/*
int main(void)
{
	const char str[] = "banane";
	const char ch = 'n';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("%c\n%s", ch, ret);
	return (0);
}*/