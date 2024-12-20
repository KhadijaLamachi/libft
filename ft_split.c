/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:54:58 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/14 22:04:13 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		else if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	ft_free(char ***ptr, int k)
{
	while (k--)
		free((*ptr)[k]);
	free(*ptr);
	*ptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (k < count_words(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		ptr[k++] = ft_substr(s, i, j);
		if (!ptr[k - 1])
			return (ft_free(&ptr, k), NULL);
		i = i + j;
	}
	return (ptr[k] = NULL, ptr);
}
