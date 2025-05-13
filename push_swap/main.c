/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:22:33 by root              #+#    #+#             */
/*   Updated: 2025/05/10 19:25:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parse(char **av)
{
	char	**splited_args;
	size_t	i = 0;

	splited_args = join_n_split(av);
	if (!splited_args)
		return (0);
	while (splited_args[i])
		printf("%s\n", splited_args[i++]);
}

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
