/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:12:13 by maureen           #+#    #+#             */
/*   Updated: 2023/01/12 17:11:20 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str);
void *ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_strlen(char *s);
char *ft_strtrim(char const *s1, char const *set);