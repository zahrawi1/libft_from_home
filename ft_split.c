/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:31:44 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/17 14:52:10 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count + 1);
}

int	eachwordlen(const char **s, char c)
{
	int	count;

	count = 0;
	while (**s != '\0' && **s != c)
	{
		count++;
		(*s)++;
	}
	if (**s == c)
		(*s)++;
	return (count);
}

char	*copyword(char const **s, char c)
{
	char	*word;
	int		countlen;
	int		i;

	i = 0;
	countlen = 0;
	while ((*s)[countlen] != c && (*s)[countlen] != '\0')
		countlen++;
	word = malloc((countlen + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while ((*s)[i] != c && (*s)[i] != '\0')
	{
		word[i] = (*s)[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**container;
	int		numberofwords;
	int		wordlen;
	int		i;
	char	*word;

	numberofwords = count_words(s, c);
	container = malloc(numberofwords * sizeof(char *));
	i = 0;
	while (i < numberofwords)
	{
		word = copyword(&s, c);
		wordlen = eachwordlen(&s, c);
		container[i] = malloc (wordlen * sizeof(char));
		if (container[i] == NULL)
			return (NULL);
		container[i] = word;
		i++;
	}
	container[i] = NULL;
	return (container);
}
