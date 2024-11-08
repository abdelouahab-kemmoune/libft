/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:41:43 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/08 18:14:20 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;
	size_t			total_size;

	total_size = count * size;
	tmp = (unsigned char *) malloc (total_size);
	if (!tmp)
		return (NULL);
	i = 0;
	if (total_size == 0)
		return (NULL);
	while (i < total_size)
	{
		tmp[i] = '0';
		i++;
	}
	return (tmp);
}
