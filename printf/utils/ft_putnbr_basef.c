/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basef.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:22:11 by maleca            #+#    #+#             */
/*   Updated: 2025/05/03 17:06:35 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_basef(unsigned long long nb, char *base, size_t *count)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		nb = -nb;
		ft_putcharf('-', count);
	}
	if (nb >= base_len)
		ft_putnbr_basef(nb / base_len, base, count);
	ft_putcharf(base[nb % base_len], count);
}

// int	main(int ac,  char **av)
// {
// 	size_t	count = 0;

// 	(void)ac;
// 	ft_putnbr_basef(atoi(av[1]), "0123456789abcdef", &count);
// 	return (0);
// }
