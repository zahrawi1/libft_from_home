/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 12:26:23 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/11 15:23:37 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	char	*container;
	size_t		str_len;
	size_t		i;

	str_len = ft_strlen(s);
	container = malloc ((str_len + 1) * sizeof(char));
	if (container == NULL)
		return (NULL);
	i = 0;
	while (str_len--)
	{
		container[i] = s[i];
		i++;
	}
	container[i] = '\0';
	return (container);
}
