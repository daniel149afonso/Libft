/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:30:38 by daafonso          #+#    #+#             */
/*   Updated: 2025/11/07 22:47:11 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][1] == '\0')
		printf("%d\n", ft_isprint(argv[1][0]));
	return (0);
}*/
