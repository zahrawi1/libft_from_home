/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:46:11 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/15 17:03:36 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	is_set(char ch, const char *set)
{
	while (*set != '\0')
	{
		if (ch == *set)
			return (1);
		set++;
	}
	return (0);
}

int	skipat_first(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (is_set(s1[i], set) && s1[i] != '\0')
		i++;
	return (i);
}

int	skipat_end(const char *s1, const char *set)
{
	int	j;

	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_set(s1[j], set))
		j--;
	return (j);
}

char	*failedcase(void)
{
	char	*container;

	container = malloc(1);
	if (container == NULL)
		return (NULL);
	container[0] = '\0';
	return (container);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		end;
	int		i;
	char	*container;

	first = skipat_first(s1, set);
	end = skipat_end(s1, set);
	if (first > end)
	{
		container = failedcase();
		return (container);
	}
	container = malloc((end - first + 2) * sizeof (char));
	if (container == NULL)
		return (NULL);
	i = 0;
	while ((i + first) <= end)
	{
		container[i] = s1[first + i];
		i++;
	}
	container[i] = '\0';
	return (container);
}
