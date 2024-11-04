/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:04:30 by akemmoun          #+#    #+#             */
/*   Updated: 2024/10/25 15:44:51 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t len)
{
    size_t i;

    i = 0;
    unsigned char *ptr = (unsigned char *) str;
    unsigned char d = (int)c;
    while (i < len)
    {
        ptr[i] = d;
        i++;
    }
    return(str);
}

/*int main()
{
    char ptr[] = "abdoelo";
    int c = 'a';
    printf("%s", ft_memset(ptr, c, 3));
}*/