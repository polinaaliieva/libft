/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:26:53 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/07 09:58:49 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
    {
        return (1);
    }
    return (0);
    
}

int main() {
    char testChar = 'S'; 

    int result = ft_isdigit(testChar);

    if (result) {
        printf("'%c' is a digit.\n", testChar);
    } else {
        printf("'%c' is not a digit.\n", testChar);
    }

    return 0;
}