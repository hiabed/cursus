/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:41:20 by mhassani          #+#    #+#             */
/*   Updated: 2022/10/21 13:27:45 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	char string[] = "hello world how are you?";

	printf("first occurrence of 'o' (strchr): %s\n", strchr(string, 'o'));

	printf("first occurre of 'o' (ft_strchr): %s\n", ft_strchr(string, 'o'));

	if (strchr(string, 'o') == NULL)
		printf("there is no 'o' here");
	
	return (0);
}*/
