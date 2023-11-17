/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:40:41 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/16 18:07:59 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
			sub = malloc(1);
	else
	{
		if ((start + len) > len_s)
			len = len_s - start;
		sub = malloc(len + 1);
	}
	if (!sub)
		return (NULL);
	while (start < len_s && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
