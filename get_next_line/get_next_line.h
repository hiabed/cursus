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

#include <sys/types.h> // the library we use, which containe "ssize_t";
#include <unistd.h> // the library we use, which containe "Read(2)";
#include <fcntl.h> // the library we use, which containe "Open(2)";
#include<string.h> // for strlen();
#include<stdio.h> // for printf();
#include<stdlib.h> // for malloc();

char *get_next_line(int fd);


#endif
