/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:06:23 by marvin            #+#    #+#             */
/*   Updated: 2021/06/04 10:42:04 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *s1, char const *s2)
{
	int	i;

	i = 0;
	 while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

static char	*ft_strcat(char *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{	
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strcpy((char *)new, s1);
	ft_strcat((char *)new, s2);
	return (new);
}
