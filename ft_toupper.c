/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:36:36 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/07 16:14:50 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return(c - 32);
    }
    return c;
    
}

int  main()
{
    printf("%c", ft_toupper('A'));
}