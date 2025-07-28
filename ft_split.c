/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:19:27 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/28 19:23:16 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		word_index;
	char	**res;

	i = 0;
	word_index = 0;
	if (!s)
		return (NULL);
	res = ft_calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			res[word_index] = ft_substr(s, start, i - start);
			if (!res[word_index])
			{
				while (word_index--)
					free(res[word_index]);
				free (res);
				return (NULL);
			}
			word_index++;
		}
	}
	return (res);
}
