/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:43:51 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/22 17:08:42 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*tab;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc(sizeof(size) * nmemb);
	if (!tab)
		return (NULL);
	while (i < nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
