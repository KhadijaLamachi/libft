/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:01:14 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/08 15:51:24 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_found(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	len_news1;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_found(s1[i], set) == 1)
		i++;
	while (is_found(s1[j], set) == 1)
		j--;
	len_news1 = (j - i + 1);
	if (len_news1 <= 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, len_news1));
}
