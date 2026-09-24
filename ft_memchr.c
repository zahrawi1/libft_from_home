/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:35:29 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/22 15:40:07 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ch;

	ch = (char *)s;
	while (n--)
	{
		if ((unsigned char)*ch == (unsigned char)c)
			return ((char *)ch);
		ch++;
	}
	return (NULL);
}
