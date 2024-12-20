/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:01:49 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/15 16:17:06 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	int		j;

	if (size == 0 && (!dst || !src))
		return (0);
	len = ft_strlen(dst);
	i = len;
	j = 0;
	if (size <= len)
	{
		return (size + ft_strlen(src));
	}
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
