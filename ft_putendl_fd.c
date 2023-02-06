/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:59:56 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 14:21:39 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*write str on file descriptor given, with newline*/
void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
