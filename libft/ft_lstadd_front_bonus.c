/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:44:26 by maleca            #+#    #+#             */
/*   Updated: 2025/04/30 00:01:44 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*nxt;

// 	lst = ft_lstnew("alo");
// 	nxt = ft_lstnew("non");
// 	ft_lstadd_front(&lst, nxt);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);
// 	free(lst);
// 	free(lst->next);
// 	return (0);
// }
