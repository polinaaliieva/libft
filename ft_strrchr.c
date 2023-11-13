/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:45:53 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/13 15:29:19 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}

// int main()
// {
//     printf("%s\n",ft_strrchr("helilooo",'l'));
//     printf("%s",strrchr("helilooo",'l'));
// }
