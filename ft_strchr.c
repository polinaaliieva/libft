/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:21:32 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/07 18:20:53 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(char *str, int character)
{
    int i;
    i = 0;



    while (str[i] != character && str[i] != '\0') 
    {
        i++;
    }
    
   if (str[i] == 0)
   {
    return (0);
   }
   
    return (&str[i]);
    
}

int main()
{
    printf("%s",ft_strchr("hello",'z'));
}