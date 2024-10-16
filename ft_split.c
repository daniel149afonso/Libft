/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:59:32 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/16 20:37:55 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count_word;
	size_t	last_sep;

	i = 0;
	count_word = 0;
	last_sep = 1;
	while (s[i])
	{
		//Des la premiere lettre on commence le mot
		if (s[i] != c && last_sep == 1)
		{
			last_sep = 0;
			count_word++;
		}
		//Detecte le separateur
		else if (s[i] == c)
			last_sep = 1;
		i++;
	}
	return (count_word);
}

char	**malloc_2darray(char **strs, const char *s, char c)
{
	size_t	count_word;
	int		i;
	int		j;

	count_word = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		//Detecte le debut du mot sans separateur
		if (s[i] != c)
			count_word++;

	}

}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	len;
	size_t	nb_words;
	int		s_word;

	s_word = -1;
	if (!s)
		return (NULL);
	nb_words = word_count(s, c);
	strs = malloc(sizeof(char *) * (nb_words + 1));
	if (!strs)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while(i < len)
	{
		if (s[i] != c && s_word < 0)

	}

}

int	main(void)
{
	printf("%zu\n", word_count("Hello World Arya", ' '));
	return (0);
}
//Decoupe un string en un tableau de string
// s = string, c = delimiteur
//Return un tableau de string
