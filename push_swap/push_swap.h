/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:36:37 by root              #+#    #+#             */
/*   Updated: 2025/06/02 20:48:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "lib/libft.h"

typedef struct s_stack
{
	int				content;
	int				idx;
	int				pos;
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

// parsing
t_stack	*parse(char **av);

// linked_list
t_stack	*init(char **splited_args);
void	stack_clear(t_stack **lst);
void	stack_addback(t_stack **lst, t_stack *new);




#endif