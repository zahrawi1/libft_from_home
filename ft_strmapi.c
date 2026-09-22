/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:24:47 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/17 16:28:56 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	int		i;
	char	*container;

	count = 0;
	i = 0;
	while (s[count] != '\0')
		count++;
	container = malloc((count + 1) * sizeof(char));
	if (container == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		container[i] = f(i, s[i]);
		i++;
	}
	container[i] = '\0';
	return (container);
}
