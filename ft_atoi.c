/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:28:59 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/22 15:48:17 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	signofnumber(const char **ch)
{
	if (**ch == '-')
	{
		(*ch)++;
		return (-1);
	}
       	if (**ch == '+')
	{
		(*ch)++;
		return (1);
	}
	return (1);
}

void	skipwhitespaces(const char **ptr)
{
	while (**ptr == ' ' || (**ptr >= 9 && **ptr <= 13))
		(*ptr)++;
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	container;

	skipwhitespaces(&nptr);
	sign = signofnumber(&nptr);
	container = 0;
	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
	{
		container = (container * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * container);
}
