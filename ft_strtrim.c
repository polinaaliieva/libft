/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polinaaliieva <polinaaliieva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:02:25 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/20 17:58:23 by polinaaliie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed;

	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i + j] && ft_strchr(set, s1[i + j]) == NULL)
		j++;
	trimmed = malloc(j + 1);
	if (!trimmed)
		return (NULL);
	ft_strncpy(trimmed, s1 + i, j);
	trimmed[j] = '\0';
	return (trimmed);
}
