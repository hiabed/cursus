/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:12:46 by mhassani          #+#    #+#             */
/*   Updated: 2022/10/24 20:16:55 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (s == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int main()
{
  ft_strmapi();
	return (0);
}*/
