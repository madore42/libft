/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:06:31 by madore            #+#    #+#             */
/*   Updated: 2023/01/31 16:45:26 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	*tmp = **lst;
	if (lst == NULL || del == NULL)
		return ;
	while (tmp->next != NULL)
	{
		del(tmp->content);
		free(tmp);
		tmp = tmp->next;
	}
	lst = NULL;
}
