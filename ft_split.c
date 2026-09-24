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
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
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

char	**free_container(char **container, int i)
{
	while (i > 0)
		free(container[--i]);
	free(container);
	return (NULL);
}

char    **ft_split(char const *s, char c)
{
	char    **container;
	int     numberofwords;
	int     i;
	char    *word;
	
	numberofwords = count_words(s, c);
	container = malloc((numberofwords + 1) * sizeof(char *));
	if (container == NULL)
		return (NULL);
	i = 0;
	while (i < numberofwords)
	{
		while (*s == c)
			s++;
		word = copyword(&s, c);
		if (word == NULL)
			return (free_container(container, i));
		eachwordlen(&s, c);
		container[i++] = word;
	}
	container[i] = NULL;
	return (container);
}
