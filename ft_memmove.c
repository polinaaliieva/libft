/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:51:23 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/17 14:03:02 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	i = 0;
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	if (!src || !dest)
		return (NULL);
	if (tmp_dest > tmp_src)
	{
		while (n > 0)
		{
			tmp_dest[n] = tmp_src[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (tmp_dest);
}
