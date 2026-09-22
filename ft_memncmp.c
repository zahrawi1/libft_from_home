/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:37:19 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/11 15:27:34 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memncmp(const void *s1, const void *s2, size_t n)
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
