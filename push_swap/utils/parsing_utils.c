/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:04:50 by root              #+#    #+#             */
/*   Updated: 2025/05/13 19:31:02 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int	is_valid(char **av)
{
	size_t	i;
	size_t	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '+' || av[i][j] == '-')
			{
				if (av[i][j + 1] && !ft_isdigit(av[i][j + 1]))
					return (0);
			}
			if ((!ft_isdigit(av[i][j]) && av[i][j] != 32))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_list	*init(char	**splited_args)
{
	t_list	stack_A;
	size_t	i;

	stack_A = ft_lstnew()
	i = 0;
	stack_A = (ft_atoi(splited_args[0]));
	i = 1;
	while (splited_args[i])
	{
		ft_lstadd_back(&stack_A, ft_lstnew(ft_atoi(splited_args[i]))
		
	}
}

char	**join_n_split(char **av)
{
	size_t	i;
	t_list	*stack_A;
	char	*tmp;
	char	**splited_args;

	if (!is_valid(av))
		return (NULL);
	i = 1;
	while (av[i])
	{
		tmp = ft_strjoin(tmp, av[i]);
		tmp = ft_strjoin(tmp, " ");
		i++;
	}
	splited_args = ft_split(tmp, ' ');
	stack_A = init(splited_args);
	return (stack_A);
}

int	*parse(char **av)
{
	char	**splited_args;
	int		*oe = NULL;
	size_t	i = 0;

	splited_args = join_n_split(av);
	if (!splited_args)
		return (0);
	while (splited_args[i])
		printf("%s\n", splited_args[i++]);
	return (oe);
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
