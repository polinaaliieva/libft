/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polinaaliieva <polinaaliieva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:47:07 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/21 20:25:02 by polinaaliie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		//return ((char *)big);
		return (&big[i]);
	if (!len)
		return (NULL);
	
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (!little[j])
				//return ((char *) (big + i));
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char *big = "hey hey im tired";
	char *little = "im";
	char	*res = ft_strnstr(big, little, 10);
	printf("%s\n", res);
}