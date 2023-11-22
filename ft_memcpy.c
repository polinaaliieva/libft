/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:58:51 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/22 19:59:34 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
		n--;
	}
	return (dest);
}

// int    main()
// {
//     void *src = malloc(10);
//     void *dest = malloc(10);
//     ft_memset(src, 'a', 10);
//     ft_memset(dest, 'c', 10);
//     ft_memcpy(dest,src,5);
//     printf("%s\n", src);
//     printf("%s\n", dest);

// }