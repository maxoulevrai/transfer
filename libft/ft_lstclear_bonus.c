/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 03:39:02 by maleca            #+#    #+#             */
/*   Updated: 2025/04/30 03:19:18 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *ptr)
// {
// 	size_t			i;
// 	// char	*p;

// 	i = 0;
// 	// p = (char *)ptr;
// 	while (((char *)ptr)[i])
// 	{
// 		((char *)ptr)[i] = '\0';
// 		i++;
// 	}
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while ((*lst))
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free((*lst));
		(*lst) = tmp;
	}
}
