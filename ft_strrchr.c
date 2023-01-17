/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:28:27 by maureen           #+#    #+#             */
/*   Updated: 2023/01/17 17:12:02 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (str && *str != '\0')
		str++;
	while (str)
	{
		if (*str == (char) c)
			return ((char *)str);
		str--;
	}
	if ((char) c == '\0')
		return ((char *)str);
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