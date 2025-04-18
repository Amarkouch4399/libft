/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:44:12 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/18 15:59:30 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	i = 0;
	tab = (unsigned char *)s;
	if (!tab)
		return (s);
	while (i < n)
	{
		tab[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	tab[] = "___ama";
	ft_memset(tab, 'o', 3);
	printf("%s\n", tab);
}
*/
