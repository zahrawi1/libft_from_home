/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:26:12 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/11 15:21:07 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *str, size_t bytes)
{
	char	*ptr;

	ptr = (char *)str;
	while (bytes--)
	{
		*ptr = 0;
		ptr++;
	}
	return (str);
}
