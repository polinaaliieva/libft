/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:02:25 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/22 18:50:17 by poaliiev         ###   ########.fr       */
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
	size_t	m_size;

	if (!s1 || !set)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > 0 && ft_strrchr(set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	m_size = (j - i) + 1;
	trimmed = malloc(m_size + 1 * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strncpy(trimmed, &s1[i], m_size);
	trimmed[m_size] = '\0';
	return (trimmed);
}
