/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:01:33 by daniel149af       #+#    #+#             */
/*   Updated: 2025/03/21 18:36:13 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	if (!dest && !src)
		return (NULL);
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (dest1 > src1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest1[i] = src1[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*int	main(void)
{
	const char	*src = "Hello";
	return (0);
}*/
//But: copie un bloc de memoire d'une
//source vers une zone de mémoire destination
//En traitant les cas de chevauchement contrairement a memcpy
//Cas 1 chevauchement:
//Copie en partant
