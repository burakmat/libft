/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:33:35 by bmat              #+#    #+#             */
/*   Updated: 2022/02/26 19:34:47 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	ind1;
	unsigned int	ind2;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ind1 = 0;
	while (s1[ind1])
	{
		str[ind1] = s1[ind1];
		ind1++;
	}
	ind2 = 0;
	while (s2[ind2])
		str[ind1++] = s2[ind2++];
	str[ind1] = '\0';
	return (str);
}
