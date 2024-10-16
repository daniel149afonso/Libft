/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:16:56 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/16 14:59:10 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Morty";
	int	c = 't';
	printf("%s", ft_strchr(str, c));
	return (0);
}*/
//Trouve le premier caractère dans une chaîne
//Si Trouve: Return un pointeur sur le premier caractere
//Si c == '\0' Return un pointeur vers la fin de la chaine
//Si rien trouve return NULL
