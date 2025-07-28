/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:09:45 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/28 18:14:47 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len_s1;
	size_t	len_set;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	if (!ft_strnstr(s1, set, len_s1))
	{
		return (NULL);
	}
	str = malloc((len_s1 - len_set + 1) * sizeof(char));
	return (str);
}
