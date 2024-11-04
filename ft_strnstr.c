/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:02:51 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:28:23 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (haystack[i + j] != needle[j])
				break ;
		}
		if (!needle[j])
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    char haystack[] = "akemmoun";
    char needle[] = "k";
    int n = 2;

    printf("%s", ft_strnstr(haystack, needle, n));
}*/