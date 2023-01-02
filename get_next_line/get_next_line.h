/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:36:14 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/21 17:36:17 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	*ft_calloc(size_t count, size_t size);
char	*get_next_line(int fd);
char	*line(char *s);
char	*left_str(char *s);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_newline(char *s);
char	*read_line(int fd, int i, char *s);
void	ft_free(char *s1, char *s2);

#endif
