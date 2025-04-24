/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:45:27 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/24 11:03:23 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int	i;
	char	*tab;
	int	temp;
	int	len;

	i = 0;
	len = 0;
	temp = n;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	tab = malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	len--;
	while (len != 0)
	{
		n = temp;
		tab[i] = n / len + '0';
		len--;
		i++;
	}
	return (tab);
}

int	main()
{
	printf("%s\n", ft_itoa(1234));
}
