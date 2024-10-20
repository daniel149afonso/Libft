/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:01:01 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/20 20:22:59 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*elem;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, elem);
		lst = lst->next;
	}
	return (new_list);
}
//BUT: Appliquer une fonction a chaque contenu de chaque element
//Puis retourner chaque nouvel element dans une nouvelle liste
//elem=ft_lstnew(f(lst->content)) //transform et cree un new elem
//ft_lstadd_back(&new_list, elem) //ajoute new elem a new_list
