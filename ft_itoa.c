/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:59:23 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/22 13:18:30 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long nbr)
{
	int	count;

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
	int		size;
	long	nbr;
	char	*result;

	nbr = (long) n;
	size = ft_count(nbr);
	result = malloc(sizeof(char) * size + 1);
	if (!result)
		return (NULL);
	result[size--] = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		result[0] = '-';
	}
	if (nbr == 0)
		result[size] = 48;
	while (nbr)
	{
		result[size] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	return (result);
}

//  int main(int ac, char **av)
//  {
//  	char	*ito = NULL;
//  	if (ac == 2)
//  		printf("%s\n", ito = ft_itoa(atoi(av[1])));
//  	free(ito);
//  	return (0);
//  }
