/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:17:23 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/08 10:13:38 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
