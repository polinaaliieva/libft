/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:06:46 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/08 14:40:03 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memset(void *s, int c, size_t n)
{
    int i;
    i = 0;

    while (n > 0)
    {
        ((unsigned char *)s)[i++] = (unsigned char)c;
        n--;
    }
    return (s);

}

// int    main()
// {
//     void *str = malloc(10);
//     ft_memset(str, 'a', 10);
//     ft_memset(str, 'c', 3);
//     printf("%s\n", str);
    
// }