/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:56:36 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/22 16:02:22 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr == NULL)
		return ;
	while (ptr != NULL)
	{
		*lst = ptr -> next;
		del(ptr -> content);
		free(ptr);
		ptr = *lst;
	}
	*lst = NULL;
}
