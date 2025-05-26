/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:36:37 by root              #+#    #+#             */
/*   Updated: 2025/05/26 23:08:08 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "lib/libft.h"

typedef struct s_stack
{
	int				content;
	// int				place_dans_LE_tablea_final;
	// int				pos;
	struct s_stack	*next;
}				t_stack;

// parsing
t_stack	*parse(char **av);

// linked_list
t_stack	*init(char **splited_args);
void	stack_clear(t_stack **lst);
void	stack_addback(t_stack **lst, t_stack *new);




#endif