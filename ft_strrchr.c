/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:50:12 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/24 11:05:30 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
    
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *tab = "hello";
    printf("%s\n", ft_strrchr(tab, 'l'));
    printf("%s\n", strrchr(tab, 'l'));
}
