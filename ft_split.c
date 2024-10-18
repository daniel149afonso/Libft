/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:59:32 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/17 22:43:22 by daniel149af      ###   ########.fr       */
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

static void	ft_initiate_vars(size_t *i, size_t *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

static void	*ft_free(char **strs, size_t nb_words)
{
	size_t	i;

	i = 0;
	while (i < nb_words)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	//Copie le mot de s dans word
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	nb_words;
	int		start_word;

	ft_initiate_vars(&i, &j, &start_word);
	if (!s)
		return (NULL);
	nb_words = word_count(s, c);
	strs = malloc(sizeof(char *) * (nb_words + 1));
	if (!strs)
		return (NULL);
	//On boucle la string s
	while (i <= ft_strlen(s))
	{
		//On cherche l'index du premier char du mot dans la string s
		if (s[i] != c && start_word < 0)
			start_word = i;
		//Detecte un sep ou la fin de s pour terminer le mot + au minimum avoir deja trouve une lettre
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			//Rempli mot par mot le tableau de string
			strs[j] = fill_word(s, start_word, i);
			if (!strs[j])
				return (ft_free(strs, j));
			//Marque la fin du mot
			start_word = -1;
			j++;
		}
		i++;
	}
	strs[j] = NULL;
	return (strs);
}

/*int	main(void)
{
	size_t	i;
	char	*str = " Arya Stark: Winter is coming";
	char	sep = ' ';
	char	**result;

	i = 0;
	result = ft_split(str, sep); //tableau de string
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]); //libere chaque string
		i++;
	}
	free(result); //libere le tableau entier de string
	return (0);
}*/
//Decoupe un string en un tableau de string
// s = string, c = delimiteur
//Return un tableau de string
