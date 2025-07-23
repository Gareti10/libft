/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:53:16 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/23 17:55:02 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	i_aux;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			i_aux = i;
			while (haystack[i_aux] && needle[j]
				&& (haystack[i_aux] == needle[j]) && i_aux < len)
			{
				i_aux++;
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}