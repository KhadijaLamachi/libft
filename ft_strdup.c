/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:07:24 by klamachi          #+#    #+#             */
/*   Updated: 2024/10/31 16:00:26 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	ptr = malloc((slen + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < slen)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return ((char *)(ptr));
}
