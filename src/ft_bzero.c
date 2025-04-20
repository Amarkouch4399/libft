/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:45:43 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 18:10:54 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "lib.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	char	tab[] = "oussama";
	ft_bzero(tab, 4);
	printf("%s\n", tab);
}
*/
