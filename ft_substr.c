/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:35:12 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/21 20:57:32 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	temp;
	char	*tab;

	i = 0;
	temp = start;
	while (s[start])
		start++;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len && s[temp])
	{
		tab[i] = s[temp];
		i++;
		temp++;
	}
	tab[i] = '\0';
	return (tab);
}
int	main()
{
	printf("%s\n", ft_substr("oussam", 3, 3));
}
