/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:38:48 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/21 22:45:40 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	const char		*str;
	unsigned char	cc;
	char			*pos;

	pos = NULL;
	if (!s)
		return (NULL);
	str = s;
	cc = (unsigned char) c;
	while (*str)
	{
		if (*str == cc)
			pos = ((char *) str);
		str++;
	}
	if (*str == cc)
		pos = ((char *) str);
	return (pos);
}
