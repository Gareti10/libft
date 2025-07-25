/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgareti- <rgareti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:33:12 by rgareti-          #+#    #+#             */
/*   Updated: 2025/07/25 17:36:04 by rgareti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	signal;	

	i = 0;
	result = 0;
	signal = 0;
	if (nptr[i] == '-')
	{
		i++;
		signal++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if ((signal % 2) == 1)
	{
		result = result * -1;
	}
	return (result);
}
