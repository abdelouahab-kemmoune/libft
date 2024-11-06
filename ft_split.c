/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akemmoun <akemmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:02 by akemmoun          #+#    #+#             */
/*   Updated: 2024/11/06 16:56:11 by akemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *s, char c)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    if (s[i] != c)
    {
        counter++;
        i++;
    }
    while (s[i])
    {
        if (s[i] != c && s[i - 1] == c)
            counter++;
        i++;
    }
    return (counter);
}

char    *ft_free(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
}

char *ft_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

char **ft_copy(char const *s, char c, int words, char **array)
{
    int i;
    int len;
    char const *index;
    
    i = 0;
    while (i < words)
    {
        len = 0;
        while (*s && *s == c)
            s++;
        index = s;
        while (*s != c && *s)
        {
            len++;
            s++;
        }
        array[i] = (char *) malloc (sizeof(char) * (len + 1));
        if (!array[i])
            ft_free(array);
        ft_strncpy(array[i], index, len);
        i++;
    }
    array[i] = NULL;
    return (array);
}

char **ft_split(char const *s, char c)
{
    int words;
    char **array;

    words = count_words(s, c);
    array = (char **) malloc (sizeof(char *) * (words + 1));
    if (!array || !s)
        return (NULL);
    array = ft_copy(s, c, words, array);
    return (array);
}

int main()
{
    char const s[] = " abc def ghk ";
    char **arr = ft_split(s, ' ');
    int i = 0;
    while (arr[i])
    {
        printf("%s.\n", (arr[i]));
        i++;
    }

    //printf("%d\n", count_words("  t st  test test test s   ", ' '));
}