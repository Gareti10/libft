/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:52:09 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/25 19:04:35 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*s;

	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	dst = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
