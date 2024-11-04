/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:23:18 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/03 16:29:31 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = "NULL";
	while (str[i])
	{
		if (str[i] == c)
			last = &str[i];
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (last);
}
