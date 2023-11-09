/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:31:50 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/09 16:34:31 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    
    i = 0;

    if (!src || !dest || size == 0)
    {
        return (ft_strlen(src));
    }
    

    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }

    while ( i < size)
    {
        dest[i] = '\0';
        i++;
    }
    
}