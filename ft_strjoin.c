/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:13:29 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/15 14:36:11 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*container;
	int		i;
	int		j;

	container = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (container == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		container[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		container[i + j] = s2[j];
		j++;
	}
	container[i + j] = '\0';
	return (container);
}
