/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:28:27 by maureen           #+#    #+#             */
/*   Updated: 2023/01/12 11:27:32 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(void)
{
	const char str[] = "banane";
	const char ch = 'n';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("%c\n%s", ch, ret);
	return (0);
}
