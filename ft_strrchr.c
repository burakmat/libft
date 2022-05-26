/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:14:54 by bmat              #+#    #+#             */
/*   Updated: 2022/02/26 17:59:10 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ind;

	ind = ft_strlen(s) + 1;
	while (ind--)
	{
		if (*(s + ind) == (unsigned char)c)
			return ((char *)(s + ind));
	}
	return (NULL);
}
