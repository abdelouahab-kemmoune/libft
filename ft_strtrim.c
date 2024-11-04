/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:39:14 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:35:34 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	char	*str;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	str = (char *) malloc (end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[end - start] = '\0';
	return (str);
}

/*int main()
{
    char s1[] = "abdonadiabbb";
    char set[] = "ab";

    printf("%s", ft_strtrim(s1, set));
}*/