/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:41:43 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:21:37 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (destsize > src_len + 1)
		ft_memcpy(dest, src, src_len + 1);
	else
	{
		ft_memcpy(dest, src, destsize - 1);
		dest[destsize - 1] = '\0';
	}
	return (src_len);
}
