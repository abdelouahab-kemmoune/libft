/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:55:01 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/07 15:10:02 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_len(int n)
{
    int counter;

    counter = 0;
    while (n > 0)
    {
        n = n / 10;
        counter++;
    }
    return (counter);
}

char *ft_ispositive(int n)
{
    int     len;
    char    *array;
    
    len = count_len(n);
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

char *ft_isnegative(int n)
{
    int     len;
    char    *array;
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

char *ft_itoa(int n)
{
    char *array;
    int len;
    
    if (n == -2147483648)
        return ("-2147483648");
    if (n == 0)
        return ("0");
    if (n < 0)
        array = ft_isnegative(n);
    if (n > 0)
        array = ft_ispositive(n);
    return (array);
}

int main()
{
    //ft_itoa(123);
    
    puts(ft_itoa(-1234));
}
    