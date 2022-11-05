/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:46:13 by mhassani          #+#    #+#             */
/*   Updated: 2022/10/22 17:40:49 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (p != NULL)
		ft_bzero(p, count * size);
	return (p);
}

/*int	main(void)
{
	char *p_calloc;
	p_calloc = calloc(10 , 4);
	
	printf("original calloc(): %d\n", *p_calloc);

	*(p_calloc + 0) = 'a';
	*(p_calloc + 1)= 'b';
	*(p_calloc + 2) = 'e';
	*(p_calloc + 3) = 'd';

	printf("%c\n", *(p_calloc + 0));
	printf("%c\n", *(p_calloc + 1));
	printf("%c\n", *(p_calloc + 2));
	printf("%c\n", *(p_calloc + 3));
	
	char *p_ft_calloc;
	p_ft_calloc = ft_calloc(10 , 4);

	printf("my own calloc(): %d\n", *p_ft_calloc);

	*(p_ft_calloc + 0) = 'a';
	*(p_ft_calloc + 1)= 'b';
	*(p_ft_calloc + 2) = 'e';
	*(p_ft_calloc + 3) = 'd';

	printf("%c\n", *(p_ft_calloc + 0));
	printf("%c\n", *(p_ft_calloc + 1));
	printf("%c\n", *(p_ft_calloc + 2));
	printf("%c\n", *(p_ft_calloc + 3));

	return (0);
}*/
