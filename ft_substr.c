/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 08:03:19 by marvin            #+#    #+#             */
/*   Updated: 2021/06/03 12:52:30 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s || !len || start > ft_strlen(s))
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (s[i] && (i < ft_strlen(s)) && j < len)
	{
		while (i != start)
			i++;
		if (i == start)
			new[j] = s[i];
		i++;
		start++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
