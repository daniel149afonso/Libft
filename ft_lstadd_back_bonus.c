/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:03:32 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/20 20:58:23 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	new->next = NULL;
}

/*int main(void)
{
    t_list *lst = NULL;   // Initialement, la liste est vide
    t_list *elem1 = malloc(sizeof(t_list));  // Premier élément
    t_list *elem2 = malloc(sizeof(t_list));  // Deuxième élément

    elem1->content = "John Snow";
    elem2->content = "Arya Stark";

    ft_lstadd_back(&lst, elem1);  // Ajoute "John Snow" à la fin de la liste
    ft_lstadd_back(&lst, elem2);  // Ajoute "Arya Stark" à la fin de la liste

    t_list *result = ft_lstlast(lst);   // Trouver le dernier élément
    printf("Dernier élément : %s\n", (char *)result->content);

    return (0);
}*/
//BUT: ajouter un element a la fin d'une liste chainee
//Cas 1: *lst est vide donc le premier element sera *new
//Cas 2: on ajoute normalement a la fin de la chaine
//on utilise ft_lstlast pour avoir le dernier elem de la liste
//et juste ajouter le nouvel element a la suite
//Toujours finir avec "new->next = NULL" apres ajout a la fin
