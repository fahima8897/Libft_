/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:14:02 by marvin            #+#    #+#             */
/*   Updated: 2021/06/14 19:46:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *new;
    int   len;
    unsigned int    i;
    
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    new = malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}
