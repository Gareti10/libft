/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gareti <gareti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:31:23 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/24 21:36:56 by gareti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	const unsigned char	*s;
	size_t				i;

	dst = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	if (dst == 0 && s == 0)
		return (dest);
	if (dst < src)
	{
		while (i < n)
		{
			dst[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dst[n] = s[n];
	}
	return ((char *) dst);
}