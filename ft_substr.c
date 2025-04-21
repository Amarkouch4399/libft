/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:35:12 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/21 20:08:44 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	temp;
	char	*tab;

	i = 0;
	temp = start;
	while (start < len || s[start])
	{
		start++;
		i++;
	}
	tab = malloc(sizeof(char) * i + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (temp < len)
	{
		tab[i] = s[temp];
		i++;
		temp++;
	}
	return (tab);
}
int	main()
{
	printf("%s\n", ft_substr("oussama", 3, 2));
}
