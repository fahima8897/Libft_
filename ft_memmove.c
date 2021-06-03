/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:58:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/06/03 13:32:47 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	tmp;
	size_t	i;

	d = dest;
	s = (char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{	
		while (i < n)
		{
			tmp = s[i];
			d[i] = tmp;
			i++;
		}
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
