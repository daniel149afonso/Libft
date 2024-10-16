/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:47:22 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/16 18:46:40 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*str;
	unsigned char	*tmp;
	size_t			i;
	size_t			total_size;

	total_size = size * count;
	str = malloc(total_size);
	if (str == NULL)
		return (NULL);
	tmp = (unsigned char *)str;
	i = 0;
	while (i < total_size)
	{
		tmp[i] = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	ft_calloc(10, 0);
	return (0);
}*/
//Alloue de la mémoire et l'initialise à zéro.
//count = nb d'element dans le tableau
//size = poids(ou taille) d'un element (char 1 octet) ou (int 4 octet)
