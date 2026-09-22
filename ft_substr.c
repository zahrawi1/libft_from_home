/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:18:36 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/15 17:39:26 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*container;
	size_t	mainlen;
	size_t	i;

	mainlen = ft_strlen(s);
	if (len == 0 || start > mainlen)
	{
		container = malloc(1);
		if (container == NULL)
			return (NULL);
		container[0] = '\0';
		return (container);
	}
	if ((mainlen - start) >= len)
		container = malloc ((len + 1) * sizeof (char));
	else
		container = malloc ((mainlen - start + 1) * sizeof (char));
	if (container == NULL)
		return (NULL);
	i = 0;
	while ((i < len) && (s[start + i] != '\0'))
	{
		container[i] = s[start + i];
		i++;
	}
	container[i] = '\0';
	return (container);
}
