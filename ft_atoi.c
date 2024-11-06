/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:40:05 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/06 18:37:57 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long num;
    int i;
    int sign;
    
    num = 0;
    i = 0;
    sign = 1;
    
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    if (sign % 2 != 0)
        return (num * -1);    
    return (num);
}

int main()
{
    char const *str = "   +4243424";
    ft_atoi(str);
    printf("");
}