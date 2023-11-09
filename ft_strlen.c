/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:22:56 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/09 12:15:23 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str )
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char    str[] = "H";
    printf("%d", ft_strlen(str));
}