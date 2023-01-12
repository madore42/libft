/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:49:12 by madore            #+#    #+#             */
/*   Updated: 2023/01/12 18:03:09 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_scan(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset && charset[i] != '\0')
		if (c == charset[i++])
			return (1);
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	int start;
	int end;
	int i;

	start = 0;
	i = 0;
	end = 0;
	while (s1 && s1[start] != '\0' && ft_scan(s1[start], set) == 1)
		start++;
	while (s1 && s1[end] != '\0')
		end++;
	end = end - 1;
	while (s1 && ft_scan(s1[end], set) == 1)
		end--;
	trim = malloc(sizeof(char) * ((end - start)+ 1));
	if (trim == NULL)
		return (NULL);
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);	
}
//chaine de caractere a trimmer, le char set est le charactere a trimmer de la string 
// retourne copie de la chaine s1 sans les characteres specifier dans set au DEBUT et a la FIN de la chaine