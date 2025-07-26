/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:17:56 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/26 15:31:27 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*str;
	unsigned char	cc;

	str = s;
	cc = (unsigned char) c;
	while (*str)
	{
		if (*str == cc)
			return ((char *) str);
		str++;
	}
	if (*str == cc)
		return ((char *) str);
	return (NULL);
}
