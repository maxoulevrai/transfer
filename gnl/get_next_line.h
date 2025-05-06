/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleca <maleca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:12:54 by maleca            #+#    #+#             */
/*   Updated: 2025/05/06 16:21:44 by maleca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif
char 	*get_next_line(int fd);
int		ft_strchr(char *str, char c);
void	stash_cleanup(char **stash);
char	*read_and_store(int fd, char *stash);
size_t	ft_strlen_gnl(char *str);
char	*ft_strjoin_gnl(char *stash, char *buff);

#endif