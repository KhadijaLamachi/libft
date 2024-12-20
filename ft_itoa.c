/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamachi <klamachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:52:11 by klamachi          #+#    #+#             */
/*   Updated: 2024/11/13 17:35:15 by klamachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_count(nbr);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	len--;
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		ptr[0] = '0';
	while (nbr > 0)
	{
		ptr[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (ptr);
}
