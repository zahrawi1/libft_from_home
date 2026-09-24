/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:24:53 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/17 17:28:54 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	container;
	long	number;
	
	number = n;
	if (number < 0)
	{
		write (fd, "-", 1);
		number *= -1;
	}
	if (number / 10 != 0)
		ft_putnbr_fd(number / 10, fd);
	container = (number % 10) + '0';
	write (fd, &container, 1);
}
