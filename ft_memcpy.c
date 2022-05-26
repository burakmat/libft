/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:26:42 by bmat              #+#    #+#             */
/*   Updated: 2022/02/24 18:15:48 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	ind;

	if (n == 0 || src == dst)
		return (dst);
	ind = 0;
	while (ind < n)
	{
		*((char *)dst + ind) = *((char *)src + ind);
		ind++;
	}
	return (dst);
}
