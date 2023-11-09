/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:45:53 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/08 16:31:08 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char *ft_strrchr(char *str, int character)
{
    int i;
    i = ft_strlen(str) - 1;

    while (str[i] != character) 
    {
        i--;
    }
    
   if (str[i] == 0)
   {
    return (0);
   }
   
    return (&str[i]);

}

int main()
{
    
    printf("%s\n",ft_strrchr("helilooo",'l'));
    printf("%s",strrchr("helilooo",'l'));
}
