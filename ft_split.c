/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:44:09 by marvin            #+#    #+#             */
/*   Updated: 2021/06/15 17:10:11 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_free(char **tab, int size)
{
	int	i;

	i = 0;
	if (!tab[i])
	{
		while (i < size)
			free(tab[i]);
		free(tab);
		return ;
	}
}

static char	*ft_make_words(const char *s, char *word, int j, int count_l)
{
	int	i;

	i = 0;
	while (count_l > 0)
	{
		word[i] = s[j - count_l];
		i++;
		count_l--;
	}
	word[i] = '\0';
	return (word);
}

static	char	**ft_count_letters(char **tab, const char *s, char c, int size)
{
	int		i;
	int		j;
	int		count_l;

	i = 0;
	j = 0;
	count_l = 0;
	while (s[j] != '\0' && i < size)
	{
		while (s[j] == c)
			j++;
		while (s[j] != '\0' && s[j] != c)
		{
			count_l++;
			j++;
		}
		tab[i] = malloc(sizeof(char) * (count_l + 1));
		ft_free(tab, size);
		ft_make_words(s, tab[i], j, count_l);
		count_l = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	tab[size] = NULL;
	ft_count_letters(tab, s, c, size);
	return (tab);
}
