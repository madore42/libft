/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:58:56 by madore            #+#    #+#             */
/*   Updated: 2023/02/05 13:35:10 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*apply f function to the content of each element, create  new lst resulting
the lst after 'f'. function del to destroy content of element if necessary*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*cntnt;

	new = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		cntnt = (f(lst->content));
		tmp = ft_lstnew(cntnt);
		if (!tmp)
		{
			ft_lstclear(&new, del);
			free(cntnt);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
