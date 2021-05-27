/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:58:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/24 16:00:28 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*la differnce avec memcpy est aue les 2 zones de memoire (dest et src
 peuvent se chauvaucher*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = dest;
	s = (char *)src;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
