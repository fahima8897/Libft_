/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:06:30 by marvin            #+#    #+#             */
/*   Updated: 2021/06/03 10:23:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
 	char	*s2;
	int		len;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	if (!(s2 = (char *)malloc(sizeof(char)* len + 1)))
		return (NULL);
	i = 0;
	 while (s1[i])
	{
		while (s1[i] == set[j])
		{
			while (s1[i] != set[j])
				j++;
			i++;
		}
	}
	return (s1);
}

#include <stdio.h>

int main()
{
	char s1[] = "eoehello";
	char set[] = "eo";
	printf("%s", ft_strtrim(s1, set));
}
