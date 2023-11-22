/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polinaaliieva <polinaaliieva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:59:23 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/21 14:32:20 by polinaaliie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(long nbr)
{
    int count;

    count = 0;
    if (nbr <= 0)
    {
        nbr = nbr * -1;
        count++;
        
    }
    while (nbr != 0)
    {
        count++;
        nbr = nbr / 10;
    }
    return (count);
}



char	*ft_itoa(int n)
{
    int size;
    long    nbr;
    char    *result;

    nbr = (long) n;
    size = ft_count(nbr);
    result = malloc(size + 1);
    if(!result)
        return (NULL);
    
	if (nbr < 0)
    {
        nbr = nbr * -1;
        result[0] = '-';
    }
    while (size-- != 0)
    {
        if (result[size] == '-')
            break;
        result[size] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return (result);
}

int main()
{
    printf("%s\n", ft_itoa(21474836477));
}