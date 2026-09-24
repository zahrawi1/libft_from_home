/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:32:05 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/22 15:36:10 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr != '\0')
		ptr++;
	if (c == '\0')
		return ((char *)ptr);
	while (ptr > s)
	{
		if ((unsigned char)*ptr == (unsigned char)c)
			return ((char *)ptr);
		ptr--;
	}
	if (ptr == s && ((unsigned char)*ptr == (unsigned char)c))
		return ((char *)ptr);
	return (NULL);
}
