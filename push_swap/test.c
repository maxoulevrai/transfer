/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:01:02 by root              #+#    #+#             */
/*   Updated: 2025/05/18 17:16:44 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "lib/libft.h"

size_t	param_count(char **splitted_args)
{
	size_t	i;

	i = 0;
	while (splitted_args[i])
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%zu", param_count(av));
	return (0);
}
