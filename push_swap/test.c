/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:01:02 by root              #+#    #+#             */
/*   Updated: 2025/05/20 17:53:19 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "lib/libft.h"

int	check_dbl(char **splited_args)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (splited_args[i])
	{
		j = i + 1;
		while (splited_args[j])
		{
			if (!strcmp(splited_args[i], splited_args[j]))
				return (0);
			j++;
		}
		i++;
	}

	return (1);
}

static int	is_valid(char **av)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] == '+' || av[i][j] == '-')
			{
				if (av[i][j + 1] && !ft_isdigit(av[i][j + 1]))
					return (0);
			}
			if ((!ft_isdigit(av[i][j]) && av[i][j] != 32 
				&& av[i][j] != '-' && av[i][j] != '+'))
				return (0);
			j++;
		}
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			return (0);
	}
	if (!check_dbl(&av[1]))
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	(void)ac;

	
	printf("%u", is_valid(&av[1]));
	return (0);
}
