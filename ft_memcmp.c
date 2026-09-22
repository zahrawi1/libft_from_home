/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:43:42 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/22 15:44:35 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr1;
	const char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n--)
	{
		if (*ptr1 > *ptr2)
			return ((unsigned char)*ptr1 - (unsigned char)*ptr2);
		else if (*ptr1 < *ptr2)
			return ((unsigned char)*ptr1 - (unsigned char)*ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}		
