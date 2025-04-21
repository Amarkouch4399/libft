/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:43:51 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/21 18:40:11 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char	*tab;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (0);
	tab = malloc(sizeof(size) * nmemb);
	while (i < nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
