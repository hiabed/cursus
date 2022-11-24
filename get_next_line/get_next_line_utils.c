/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:36:32 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/21 17:36:34 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *s)
{
	int		i;
	char	*line;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	line = (char *)malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (s[i] != '\n')
	{
		line[i] = s[i]; //    "hello[-2('\n')][-1('\0')]" .  "hello\n"
		i++;
	}
	if (s[i] == '\n')
		i += 2;
	line[i - 2] = '\n';
	line[i - 1] = '\0';
	return (line);
}

char	*next_line(char *s)
{
}

int	main(void)
{
	char	*s;

	s = get_line("hello world\nhow are you?\nim good thank you.");
	printf("%s", s);
	return (0);
}
