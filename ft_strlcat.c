/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:34:07 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/15 12:45:04 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	if (ft_strlen(dst) < size - 1)
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && j < size - len_dst - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (len_dst + ft_strlen(src));
}

// int	main(void)
// {
// 	// char dest[] = "Hello";
// 	// char src[] = "World";
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	memset(dest, 'B', 4);
// 	// printf("%zu", ft_strlcat(dest,src, 30));
// 	size_t res = ft_strlcat(dest, src, 6);
// 	printf("res=%lu, dst=%s\n", res, dest);
// }
