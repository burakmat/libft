/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:42:51 by bmat              #+#    #+#             */
/*   Updated: 2022/02/28 18:21:42 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ind;

	ind = 0;
	if (!s || !f)
		return ;
	while (s[ind])
	{
		f(ind, (s + ind));
		ind++;
	}
}
