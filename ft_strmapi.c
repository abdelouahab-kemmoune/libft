/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:40:55 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:25:03 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char function(unsigned int i, char c)
{
    i = 0;
    return(c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(s);
	i = 0;
	str = (char *) malloc (len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
    char const s[] = "abdo";
    char *result = ft_strmapi(s, function);
    
    printf("%s", result);

    free(result);
}*/