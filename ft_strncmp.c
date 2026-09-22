/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 14:33:30 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/21 18:52:05 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*ptr1;
	const char	*ptr2;
	int			diff;
	int			flag;

	ptr1 = s1;
	ptr2 = s2;
	diff = 0;
	flag = 1;
	while (n-- && flag)
	{
		if (*ptr1 != *ptr2)
		{
			diff = (unsigned char)*ptr1 - (unsigned char)*ptr2;
			flag = 0;
		}
		if (*ptr1 == '\0' || *ptr2 == '\0')
			flag = 0;
		ptr1++;
		ptr2++;
	}
	return (diff);
}
