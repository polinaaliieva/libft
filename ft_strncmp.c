/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:02:45 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/09 14:42:42 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(char *str1, char *str2, size_t n)
{
    size_t i;

    i = 0; 

    while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
    {
        if (str1[i] == str2[i])
        {
            i++;
        }
        else 
        {
            return (str1[i] - str2[i]);
        }
    }
    return (0);
}

int main()
{
    char str1[] = "abcgyrjryt";
    char str2[] = "abcyfhj";
 

    printf("%d",ft_strncmp(str1, str2, 20));

}