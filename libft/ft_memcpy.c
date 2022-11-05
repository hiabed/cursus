/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:        :+: :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:25:56 by mhassani          #+#    #+#             */
/*   Updated: 2022/10/23 21:03:03 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	if (dst == '\0' && src == '\0')
		return (NULL);
	p_dest = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char dest[] = "hello";
	char source[] = "world";
	ft_memcpy(dest, source, 4 * sizeof(char));
	printf("original memcpy is: dest is ==> %s, and src is ==> %s\n", dest,
			source);
	memcpy(dest, source, 4 * sizeof(char));
	printf("original memcpy is: dest is ==> %s, and src is ==> %s\n", dest,
			source);
	return (0);
}*/
