/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:43:14 by bmat              #+#    #+#             */
/*   Updated: 2022/02/24 18:17:37 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		if (*((unsigned char *)s + ind) == (unsigned char)c)
			return ((void *)(s + ind));
		ind++;
	}
	return (NULL);
}
