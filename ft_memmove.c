/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:19:41 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/16 02:14:24 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;
	size_t				i;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	if (ptrdest > ptrsrc && ptrdest < (ptrsrc + n))
	{
		i = n;
		while (i > 0)
		{
			ptrdest[i - 1] = ptrsrc[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
