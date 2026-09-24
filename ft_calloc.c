/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 12:14:57 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/11 15:07:55 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*container;
	char	*ptr;
	size_t	totalsize;

	if (n != 0 && size > SIZE_MAX / n)
		return (NULL);
	totalsize = n * size;
	if (totalsize == 0)
		totalsize++;
	container = malloc(totalsize);
	if (container == NULL)
		return (NULL);
	ptr = (char *)container;
	while (totalsize--)
	{
		*ptr = 0;
		ptr++;
	}
	return (container);
}
