/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:47:22 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/08 16:48:51 by daafonso         ###   ########.fr       */
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
