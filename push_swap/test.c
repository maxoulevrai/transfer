/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:01:02 by root              #+#    #+#             */
/*   Updated: 2025/05/10 20:23:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/libft.h"


int	yo_digital(char *str)
{
	size_t	i;
	
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(char **args)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (args[i])
	{
		if ((!yo_digital(args[i])))
			return (0);
		j = i + 1;
		while (args[j])
		{
			if (!ft_strcmp(args[i], args[j]))
				return (0);
			if 
			
			j++;
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
		tmp = ft_strjoin(tmp, " ");
		i++;
	}
	splited_args = ft_split(tmp, ' ');
	return (splited_args);
}


void	parse(char **av)
{
	char	**splited_args;
	size_t	i = 0;

	splited_args = join_n_split(av);
	if (!splited_args)
		return ;
	while (splited_args[i])
		printf("%s\n", splited_args[i++]);
}

int	main(int ac, char **av)
{
	// int	*args;
	
	if (ac == 1)
		return (ft_putendl_fd("Error", 2), 0);
	parse(av);
	return (0);
	// if (!args)
	// 	return (ft_putendl_fd("Error", 2), 0);
}
