/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maureen <maureen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:06:00 by madore            #+#    #+#             */
/*   Updated: 2023/01/13 11:36:34 by maureen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_size(int n)
{
    int size;

    size = 1;
    while (n > 9 && n < -9)
    {
        n = n / 10;
        size++;
    }
    if (n < 0)
        size++;
    return (size);
}

char *ft_itoa(int n)
{
    char *str;
    int size;
    long int nb;

    size = ft_size(n);
    str = malloc(sizeof(char) * (size + 1));
    nb = n;
    if (nb == 0)
        str[0] = '0';
    if (nb < 0)
    {
        str[0] = '-';
        nb = nb / -1;
    }
    while (nb > 0)
    {
        str[size - 1] = nb % 10 + 48;
        nb = nb / 10;
        size--;
    }
    return (str);
}