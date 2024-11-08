/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:41:43 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/08 14:57:26 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *) malloc (count * size);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = '0';
		i++;
	}
	return (tmp);
}
