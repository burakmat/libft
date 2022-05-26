/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:06:21 by bmat              #+#    #+#             */
/*   Updated: 2022/02/28 21:18:11 by bmat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*newlst;
	t_list	*newnode;

	if (!f || !lst)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
/*
void *f(void *ptr)
{
	char *str;
	char *pos;
	int		i;

	i = 0;
	str = (char *)malloc(ft_strlen((char *)ptr) + 1);
	pos = str;

	while (((char *)ptr)[i])
	{
		str[i] = ((char *)ptr)[i];
		i++;
	}
	str[i] = '\0';
	return str;
}
#include <stdio.h>
int main()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *lst;
	char arr[] = "hello";
	char arr2[] = "world";
	char arr3[] = "!!!";


	node1 = ft_lstnew(arr);
	node2 = ft_lstnew(arr2);
	node3 = ft_lstnew(arr3);

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	lst = ft_lstmap(node1, f, (void *)0);
	printf("%s", (char *)lst->content);

	return 0;
}
*/
