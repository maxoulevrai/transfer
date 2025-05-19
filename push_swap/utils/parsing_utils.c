/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:04:50 by root              #+#    #+#             */
/*   Updated: 2025/05/19 20:55:58 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	check_dbl(int *tab, size_t siz)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < siz)
	{
		j = i + 1;
		while (j < siz)
		{
			if (tab[i] == tab[j])
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
			if ((!ft_isdigit(av[i][j]) && av[i][j] != 32 
				&& av[i][j] != '-' && av[i][j] != '+'))
				return (0);
			if (ft_strcmp(av[i], av[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static char	**join_n_split(char **av)
{
	size_t	i;
	char	*tmp;
	char	**splited_args;
	

	tmp = NULL;
	if (!is_valid(av))
		return (NULL);
	i = 1;
	while (av[i])
	{
		tmp = ft_strjoin(tmp, av[i]);
		tmp = ft_strjoin(tmp, " ");
		if (!tmp)
			return (NULL);
		i++;
	}
	splited_args = ft_split(tmp, ' ');
	free(tmp);
	if (!splited_args)
		return (NULL);
	return (splited_args);
}

static t_stack	*init(int	*atoied_args, size_t siz)
{
	t_stack	*head;
	t_stack	*tmp;
	t_stack	*p;
	size_t	i;

	head = NULL;
	i = 0;
	while (i < siz)
	{
		tmp = malloc(sizeof(t_stack));
		if (!tmp && head)
			return (NULL); // clear manquant
		tmp->content = atoied_args[i++];
		tmp->next = NULL;
		if (head == NULL)
			head = tmp;
		else
		{
			p = head;
			while (p->next != NULL)
				p = p->next;
			p->next = tmp;
		}
	}
	return (head);
}

t_stack	*parse(char **av)
{
	int		*atoied_args;
	char	**splited_args;
	t_stack	*stack_A;
	size_t	i;
	size_t	dtablen;

	i = 0;
	splited_args = join_n_split(av);
	if (!splited_args)
		return (NULL);
	dtablen = dtab_len(splited_args);
	atoied_args = malloc(sizeof(int) * dtablen);
	if (!atoied_args || !check_dbl(atoied_args, dtablen))
		return (NULL);
	i = -1;
	while (splited_args[++i])
		atoied_args[i] = atoi(splited_args[i]);
	free_dtab(splited_args);
	stack_A = init(atoied_args, dtablen);
	if (!stack_A)
		return (NULL); // clear manquant
	free(atoied_args);
	return (stack_A);
}
