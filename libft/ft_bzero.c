/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:02:26 by mhassani          #+#    #+#             */
/*   Updated: 2022/10/21 12:48:46 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*(ptr++) = 0;
}

/*int	main()
{	
	char a[] = "hey";
	bzero(a, 0 * sizeof(char));
	printf("actual bzero is: %s\n", a);
	ft_bzero(a, 0 * sizeof(char));
	printf("my bzero is : %s\n", a);
	return 0;
}*/
