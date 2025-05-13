/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:47:24 by maleca            #+#    #+#             */
/*   Updated: 2025/05/09 19:43:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst && !new)
		return ;
	if (!*lst)
	{
		(*lst) = new;
		return ;
	}
	tmp = (*lst);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

// int	main(void)
// {
// 	t_list	*begin = ft_lstnew("");
// 	t_list	*elem = ft_lstnew("larem$");
// 	t_list	*elem2 = ft_lstnew("ipsum$");
// 	t_list	*elem3 = ft_lstnew("dalar$");
// 	t_list	*elem4 = ft_lstnew("sit$");

// 	begin = NULL;
//     ft_lstadd_back(&begin, elem);
//     ft_lstadd_back(&begin, elem2);
//     ft_lstadd_back(&begin, elem3);
//     ft_lstadd_back(&begin, elem4);
//     while (begin)
//     {
//         printf("%s\n", (char *)begin->content);
//         begin = begin->next;
//     }
// 	return (0);
// }