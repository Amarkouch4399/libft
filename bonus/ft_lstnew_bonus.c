/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:00:56 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/29 20:25:15 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL; 
	return (node);
}
/*
int	main()
{
	t_list *node = ft_lstnew("ouss");
	printf("%s\n", (char *)node->content);
}
*/
