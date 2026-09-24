/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:28:36 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/22 15:53:31 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	spaceav;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_len >= size)
		return (size + ft_strlen (src));
	spaceav = size - dst_len - 1;
	while (src[i] != '\0' && i < spaceav)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
