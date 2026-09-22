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

	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	container = (n % 10) + '0';
	write (fd, &container, 1);
}
