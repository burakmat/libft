/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:47:12 by bmat              #+#    #+#             */
/*   Updated: 2022/02/26 17:49:22 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordnum(const char *s, char c)
{
	int	i;
	int	num;
	int	sp;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		sp = 1;
		while (s[i] && s[i] != c)
		{
			if (sp == 1)
			{
				num++;
				sp = 0;
			}
			i++;
		}
	}
	return (num);
}

static char	*take_wrd(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wordnm;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	wordnm = wordnum(s, c);
	result = (char **)malloc(sizeof(char *) * (wordnm + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = take_wrd(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}
/*#include <stdio.h>
int main()
{
	char *str;
	char **str2;



	str = "***aa**a**a*a**aaa";
	//printf("%d", wordnum(str, '*'));
	str2 = ft_split(str, '*');
	for(int i = 0; i < 3; i++)
	{
		printf("%s", str2[i]);
	}
	return 0;
}*/
