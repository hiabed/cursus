/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:16:42 by mhassani          #+#    #+#             */
/*   Updated: 2022/10/21 12:54:17 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//slightly different from memcpy;
//need to update;

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	if (dst == '\0' && src == '\0')
		return (NULL);
	p_dest = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	if (p_dest > p_src)
		while (len-- > 0)
			p_dest[len] = p_src[len];
	else
		ft_memcpy(p_dest, p_src, len);
	return (dst);
}

// int	main(void)
// {
//     char src[] = "abcdefghijkl";

//     memmove(src + 2, src, 10 * sizeof(char));

//  	printf("%s\n", src + 2);

//  	return (0);
// }
