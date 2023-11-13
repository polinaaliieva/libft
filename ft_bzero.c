/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:34 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/13 13:49:08 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, 0, n));
}

/*int    main()
{
    void *str = malloc(10);
    ft_memset(str, 'a', 10);
    ft_memset(str, 'c', 3);
    ft_bzero(str, 2);
    printf("%s\n", str);
    
}*/