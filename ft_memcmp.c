/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:31:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/24 16:50:37 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	while ((*a || *b) && n)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
		n--;
	}
	return (0);
}
