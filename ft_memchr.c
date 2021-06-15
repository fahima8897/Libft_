/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:07:50 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/24 16:30:31 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;

	b = (unsigned char *)s;
	while (n)
	{
		if (*b == (unsigned char)c)
			return (b);
		b++;
		n--;
	}
	return (NULL);
}
