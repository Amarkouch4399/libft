/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:52:44 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 19:10:57 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		if (tab[i] == c)
			return (&tab[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*tab = "ouss";
	printf("%p\n", ft_memchr(tab, 'u', 3));
}
*/
