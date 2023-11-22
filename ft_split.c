/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poaliiev <poaliiev@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:52:57 by poaliiev          #+#    #+#             */
/*   Updated: 2023/11/22 17:46:16 by poaliiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_everything(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free(result);
	return (NULL);
}

static size_t	ft_count_word(const char *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_strdup_new(const char *s, int start, int end)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(end - start + 1);
	if (!copy)
		return (NULL);
	while (i + start < end)
	{
		copy[i] = s[i + start];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static char	**ft_split_words(char **result, int amount, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] && j < amount)
	{
		if ((char)s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && (char)s[i] != c)
				i++;
			result[j] = ft_strdup_new(s, start, i);
			if (result[j] == NULL)
				return (ft_free_everything(result));
			j++;
		}
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	amount;

	if (s == NULL)
		return (NULL);
	amount = ft_count_word(s, c);
	result = malloc((amount + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_split_words(result, amount, s, c);
	if (!result && amount != 0)
		return (NULL);
	result[amount] = 0;
	return (result);
}

// int	main()
// {
//     char **result;
//     int i;

//     i = 0;
//     result  = ft_split(NULL, ',');
//     // while (result[i])
//     // {
//     //     printf("%s\n", result[i]);
//     //     i++;
//     // }
// }