/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:58:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/06/09 13:35:38 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	tmp;

	d = dest;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{	
		while (n > 0)
		{
			tmp = s[n - 1];
			d[n - 1] = tmp;
			n--;
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
