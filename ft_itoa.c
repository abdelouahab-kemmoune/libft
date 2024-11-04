/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:55:01 by akemmoun          #+#    #+#             */
/*   Updated: 2024/10/30 16:38:47 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    size_t count;
    char *str;
    size_t nbr;
    size_t ne_count;

    count = 0;
    ne_count = 0;
    nbr = n;

    if (n == 0)
        return(ft_strdup("0"));
    
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }

    if (ne_count)
        count++;

    str = (char *) malloc (count + 1);
    
    if (!str)
        return(NULL);

    str[count] = '\0';
    
    if (ne_count)
        n = -n;

    

            
    return(str);
}

int main()
{
    int n = -424;

    printf("%s", ft_itoa(n));
}