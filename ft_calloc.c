/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:41:43 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:04:39 by akemmoun         ###   ########.fr       */
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

/*int main()
{
    size_t count = 7;
    size_t size = 2;
    unsigned char *ptr = (unsigned char*) ft_calloc(count, size);

    printf("%s", ptr);
    
    free(ptr);
}*/