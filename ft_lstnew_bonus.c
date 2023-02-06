/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:47:46 by madore            #+#    #+#             */
/*   Updated: 2023/02/06 15:14:11 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allow memory with malloc and return new element. varibale member content
is inatialized with value of parameter content. next is set as NULL*/
t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	tmp -> content = content;
	tmp->next = NULL;
	return (tmp);
}
