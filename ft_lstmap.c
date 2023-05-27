/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:33:51 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/27 13:54:48 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*element;
	void	*content;

	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (!element)
		{
			free(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, element);
		lst = lst -> next;
	}
	return (new);
}
