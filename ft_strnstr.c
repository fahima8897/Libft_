/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:43:42 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/26 14:55:46 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && (i + j) < len)
	{
		if (s2[j] == s1[i + j])
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + i);
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
