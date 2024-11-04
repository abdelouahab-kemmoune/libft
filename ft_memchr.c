/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:39:36 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:45:46 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char	c;
	unsigned char	*str;
	size_t			i;

	i = 0;
	c = (unsigned char) value;
	str = (unsigned char *) ptr;
	while (i < num)
	{
		if (str[i] == c)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    char str[] = "abdo";
    int search = 'b';
    int num = 1;
    
    printf("%s", ft_memchr(str, search, num));
}*/