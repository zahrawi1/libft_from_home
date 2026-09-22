/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 14:58:31 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/17 16:05:32 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_digits(int number)
{
	int	count;

	count = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		count++;
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return (count);
}

long	reversenumber(int number)
{
	int		container;
	long	reversednumber;

	reversednumber = 0;
	while (number != 0)
	{
		container = number % 10;
		number /= 10;
		reversednumber = (reversednumber * 10) + container;
	}
	return (reversednumber);
}

char	convertnumbertochar(int number)
{
	return (number + '0');
}

char	*ft_itoa(int n)
{
	char	*result;
	int		countdigits;
	long	container;
	int		i;

	countdigits = count_digits(n);
	container = reversenumber(n);
	result = malloc ((countdigits + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		result[i] = '-';
		container *= -1;
		i++;
	}
	while (i < countdigits)
	{
		result[i] = convertnumbertochar(container % 10);
		container /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}
