/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:22:33 by root              #+#    #+#             */
/*   Updated: 2025/05/19 20:28:33 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int ac, char **av)
{
	int	*args;
	
	if (ac == 1)
		return (ft_putendl_fd("Error", 2), 0);
	args = parse(av);
	return (0);
	// if (!args)
	// 	return (ft_putendl_fd("Error", 2), 0);
}
