/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madore <madore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:58:56 by madore            #+#    #+#             */
/*   Updated: 2023/02/03 17:32:34 by madore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*apply f function to the content of each element, create  new lst resulting
the lst after 'f'. function del to destroy content of element if necessary*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// t_list	*new;
	// t_list	*tmp;

	// new = NULL;
	// if (!f || !del || !lst)
	// 	return (lst);
	// while (lst)
	// {
	// 	tmp = ft_lstnew(f(lst->content));
	// 	if (!tmp)
	// 	{
	// 		ft_lstclear(&new, del);
	// 		return (NULL);
	// 	}
	// 	ft_lstadd_back(&new, tmp);
	// 	tmp = tmp->next;
	// 	lst = lst->next;
	// }
	// return (new);
	t_list    *head;
    t_list    *node;

    if (lst == NULL || f == NULL || del == NULL)
        return (lst);
    head = ft_lstnew(f(lst->content));
    lst = lst->next;
    node = head;
    while (lst)
    {
        node->next = ft_lstnew(f(lst->content));
        if (node->next == NULL)
        {
            ft_lstclear(&head, del);
            return (NULL);
        }
        node = node->next;
        lst = lst->next;
    }
    return (head);
}
