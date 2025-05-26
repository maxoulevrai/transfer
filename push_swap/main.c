/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:22:33 by root              #+#    #+#             */
/*   Updated: 2025/05/26 23:04:45 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int ac, char **av)
{
	t_stack	*stack_A;
	t_stack	*tmp;

	if (ac == 1)
		return (ft_putendl_fd("Error (too few arguments)", 2), 0);
	stack_A = parse(av);
	tmp = stack_A;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	// tmp = stack_A;
	// while (tmp != NULL)
	// {
	// 	tmp->content += 1;
	// 	tmp = tmp->next;
	// }
	// tmp = stack_A;
	// while (tmp != NULL)
	// {
	// 	printf("%d\n", tmp->content);
	// 	tmp = tmp->next;
	// }
	stack_clear(&stack_A);
	return (0);
	// if (!args)
	// 	return (ft_putendl_fd("Error", 2), 0);
}
