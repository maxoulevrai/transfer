/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:03:08 by maleca            #+#    #+#             */
/*   Updated: 2025/05/03 20:16:39 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_fill(int fd, char *buff)
{
	static char	*stash;
	char		buff[BUFFER_SIZE];

	
}

char *get_next_line(int fd)
{

	if (!fd || !read(fd, NULL, 0))
		return (NULL);
	read_and_fill(fd, buff)
}
