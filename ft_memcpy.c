/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:28:05 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/08 14:56:56 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	i = 0;
	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	if (!src || !dest)
		return (NULL);
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	tmp_dest[n] = '\0';
	return (dest);
}
