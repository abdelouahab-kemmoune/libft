/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:17:26 by akemmoun          #+#    #+#             */
/*   Updated: 2024/10/31 15:03:14 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t i;

    i = 0;
    char *tmp_src;
    char *tmp_dest;
    
    
    tmp_dest = (char *) dest;
    tmp_src = (char *) src;
    
    if (tmp_src < tmp_dest)
    {
        while (len-- > 0)
            tmp_dest[len] = tmp_src[len];
    }
    else
    {
        while (i < len)
        {
            tmp_dest[i] = tmp_src[i];
            i++;
        }
    }
    return(dest);
}

/*int main()
{
    char buffer[] = "steel ball run";
    char *dest = &buffer[1];
    //char *src = "klmnopqrstuv";
    size_t len = 7;
    
    printf("%s\n", memmove(dest, dest+1 , len));
}*/