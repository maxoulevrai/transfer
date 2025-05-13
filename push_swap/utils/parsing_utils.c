/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:04:50 by root              #+#    #+#             */
/*   Updated: 2025/05/10 19:26:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int	is_valid(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if ((!ft_isdigit(str[i]) && !str[i] == ' '))
				return (0);
			if (str[i] == str[j])
				return (0);
			if (str[i] == '+' || str[i] == '-')
			{
				if (str[i + 1] == '+' || str[i + 1] == '-')
					return (0);
			}
			i++;
		}
		i++;
	}
	return (1);
}

char	**join_n_split(char **av)
{
	size_t	i;
	char	*tmp;
	char	**splited_args;
	
	i = 1;
	while (av[i])
	{
		if (!is_valid(av[i]))
			return (NULL);
		i++;
	}
	i = 1;
	while (av[i])
	{
		tmp = ft_strjoin(tmp, av[i]);
		tmp = ft_strjoin(tmp, ' ');
		i++;
	}
	splited_args = ft_split(tmp, ' ');
	return (splited_args);
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
