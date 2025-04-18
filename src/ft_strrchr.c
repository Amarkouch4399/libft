/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:40:46 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/18 20:52:16 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "lib.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i])
		i++;
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main()
{
	char	*tab = "ouss";
	printf("%s\n", ft_strchr(tab, 's'));
}
*/
