/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:05:39 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/11 17:45:56 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_length(int nbr);

char	*ft_itoa(int n)
{
	size_t	len;
	long	nbr;
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);


}

int	int_length(int nbr)
{
	int	count;

	count = 0;

	if (nbr < 0)
	{
		nbr = -nbr;
		count++;
	}

	while (nbr > 9)
	{
		nbr /= 10;
		count++;
	}
}
