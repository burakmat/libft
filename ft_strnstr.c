/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:25:24 by bmat              #+#    #+#             */
/*   Updated: 2022/02/28 10:23:59 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hind;
	size_t	nind;

	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	hind = -1;
	nind = 0;
	while (haystack[++hind] && hind + nind < len)
	{
		nind = 0;
		while (haystack[hind + nind] && hind + nind < len && \
				haystack[hind + nind] == needle[nind])
		{
			nind++;
			if (needle[nind] == '\0')
				return ((char *)&haystack[hind]);
		}
	}
	return (NULL);
}
/*
#include <string.h>
#include <unistd.h>
void print(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int main()
{
	char *s;
	//char *d;

	s = ft_strnstr("lorem ipsum dolor sit amet","dolor", 15);
	//d = strnstr("aaabcabcd", "aabc", -1);
	print(s);
	//print(d);
	return 0;
}
*/
