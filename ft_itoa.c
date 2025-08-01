/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:47:36 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/30 14:58:06 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n > 9 || n < -9)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	aux;
	int		count;
	char	*number;
	int		i;

	count = ft_countdigits(n);
	aux = (long)n;
	i = 0;
	if (aux < 0)
		aux *= (-1);
	number = malloc ((count + 1) * sizeof(char));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		number[0] = '-';
	}
	number[count--] = '\0';
	while (aux > 9)
	{
		number[count--] = (aux % 10) + '0';
		aux /= 10;
	}
	number[count] = aux + '0';
	return (number);
}
