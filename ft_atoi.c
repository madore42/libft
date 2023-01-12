/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:15:30 by madore            #+#    #+#             */
/*   Updated: 2023/01/12 15:15:33 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int ngv;
    int num;
    
    i = 0;
    ngv = 1;
    num = 0;
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            ngv = ngv * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - 48;
        i++;
    }
    return (num * ngv);
}