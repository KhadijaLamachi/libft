/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:20:20 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/08 10:27:18 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptrjoin;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	ptrjoin = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ptrjoin)
		return (NULL);
	while (i < s1_len)
		ptrjoin[i++] = *s1++;
	j = 0;
	while (j < s2_len)
		ptrjoin[i + j++] = *s2++;
	ptrjoin[i + j] = '\0';
	return (ptrjoin);
}
