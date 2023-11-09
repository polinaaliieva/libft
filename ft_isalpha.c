/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:44:38 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/09 14:24:17 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
        return (1);
    }
	return (0);
    
}

int main()
{
	int character1;
    character1 = 'f';

    if (ft_isalpha(character1)) {
        printf("%c is an alphabet character.\n", character1);
    } else {
        printf("%c is not an alphabet character.\n", character1);
    }
}