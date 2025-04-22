/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:45:36 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/22 18:15:32 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c , char const *set)
{
	int	i;

	i = 0;
	while(set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i])
	{
		if (ft_check(s1[i], set) == 0)
			j++;
		i++;
	}
	tab = malloc(sizeof(char) * j + 1);

	return (tab);
}
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	printf("%s\n", ft_strtrim("oussama", "as"));
}
