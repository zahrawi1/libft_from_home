/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:25:03 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/11 15:20:50 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t bytes)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) str;
	while (bytes--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (str);
}
