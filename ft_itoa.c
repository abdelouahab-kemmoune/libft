/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:18:23 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/08 18:09:33 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(long n)
{
	int	counter;

	counter = 0;
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_ispositive(long n)
{
	int		len;
	char	*array;

	len = count_len(n);
	if (n == 0)
		len++;
	array = (char *) malloc (len + 1);
	array[len--] = '\0';
	while (len >= 0)
	{
		array[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (array);
}

char	*ft_isnegative(long n)
{
	int		len;
	char	*array;

	n *= -1;
	len = count_len(n);
	array = (char *) malloc (sizeof(char) *(len + 2));
	array[len + 1] = '\0';
	while (len > 0)
	{
		array[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	array[len] = '-';
	return (array);
}

char	*ft_itoa(int n)
{
	char	*array;
	long	nb;

	nb = n;
	if (nb < 0)
		array = ft_isnegative(nb);
	if (nb >= 0)
		array = ft_ispositive(nb);
	if (!array)
		return (NULL);
	return (array);
}
