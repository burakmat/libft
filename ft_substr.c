/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:22:02 by bmat              #+#    #+#             */
/*   Updated: 2022/02/28 12:23:24 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				ind;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (len <= 0 || (start + 1 > ft_strlen(s)))
	{
		sub = (char *)malloc(1);
		*sub = 0;
		return (sub);
	}
	ind = 0;
	i = 0;
	while (s[start + i] && i < len)
		i++;
	sub = (char *)malloc(sizeof(char) * (i + 1));
	if (!sub)
		return (NULL);
	while (start < ft_strlen(s) && len-- > 0)
		sub[ind++] = s[start++];
	sub[ind] = '\0';
	return (sub);
}
