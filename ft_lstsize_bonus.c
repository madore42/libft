/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:36:32 by madore            #+#    #+#             */
/*   Updated: 2023/01/24 15:44:05 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstsize;
	
	lstsize = 0;
	while (lst != NULL)
	{ 
		lst = lst->next;
		lstsize++;
	}
	return (lstsize);
}