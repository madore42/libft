/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:47:46 by madore            #+#    #+#             */
/*   Updated: 2023/01/24 14:37:53 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* alloue (avec malloc) et renvoie un nouvel element. la variable membre 'content'
 est initialisée à l'aide de la valeur du parametre 'content'. la variable 'next' 
 est initialise a null*/
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