/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:06:15 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/22 17:11:40 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*tab1;
	char	*tab2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tab1 = (char *)big;
	tab2 = (char *)little;
	if (!tab2)
		return (tab1);
	while (tab1[i] && i < len)
	{
		j = 0;
		while (tab1[i + j] == tab2[j] && (i + j) < len)
		{
			if (tab2[j + 1] == '\0')
				return (&tab1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[50] = "HelloOuss";
	char *to_find = "O";

	printf("%s", ft_strnstr(str, to_find, 6));
	printf ("%s", "\n");
	printf("%s", ft_strnstr(str, to_find, 6));
}
*/
