/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:03:19 by marvin            #+#    #+#             */
/*   Updated: 2021/05/31 09:04:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    char *src;
    unsigned int i;
    unsigned int j;
    unsigned int length;
    
    src = (char *)s;
    i = 0;
    j = 0;
    length = ft_strlen(src);
    if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    if (src == 0)
        return (NULL);
   if (start >= length)
	return (ft_strdup(""));
    while (src[i] && i < length && j < len)
    {
        while (i != start)
            i++;
        if (i == start)
            new[j] = src[i];
        i++;
        start++;
        j++;
    }
    new[j] = '\0';
    return (new);
}

