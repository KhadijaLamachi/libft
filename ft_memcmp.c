/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:01:40 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/13 15:52:15 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptrs1;
	const unsigned char	*ptrs2;
	size_t				i;

	i = 0;
	ptrs1 = (const unsigned char *)s1;
	ptrs2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ptrs1[i] != ptrs2[i])
			return ((int)(ptrs1[i] - ptrs2[i]));
		i++;
	}
	return (0);
}
