/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:54:07 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/21 15:55:04 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr == NULL)
	{
		*lst = new;
		new -> next = NULL;
	}
	while (ptr != NULL)
	{
		if ((ptr -> next) == NULL)
		{
			ptr -> next = new;
			new -> next = NULL;
			return ;
		}
		ptr = ptr -> next;
	}
}
