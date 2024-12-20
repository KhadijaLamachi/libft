/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:39:26 by klamachi          #+#    #+#             */
/*   Updated: 2024/10/31 15:56:50 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptrs;
	size_t				i;

	ptrs = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return ((void *)(&ptrs[i]));
		i++;
	}
	return (NULL);
}
