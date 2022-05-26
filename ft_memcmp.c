/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:04:44 by bmat              #+#    #+#             */
/*   Updated: 2022/02/24 18:26:29 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		if (*((unsigned char *)s1 + ind) == *((unsigned char *)s2 + ind))
			ind++;
		else
			return (*((unsigned char *)s1 + ind) - \
						(*((unsigned char *)s2 + ind)));
	}
	return (0);
}
