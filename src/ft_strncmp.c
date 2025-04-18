/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:55:28 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/18 21:18:37 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
#include "lib.h"
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i = 0;

	while (i < n)
	{
		if ((s1[i] != s2[i]) || (s1[i] == '\0' || s2[i] == '\0'))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
int	main()
{
	char	*tab1 = "ouss1";
	char	*tab2 = "oussa";

	printf("%d\n", ft_strncmp(tab1, tab2, 5));
	printf("%d\n", strncmp("ouss1", "oussa", 5)); 
}
