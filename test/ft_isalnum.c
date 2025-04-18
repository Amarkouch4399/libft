/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:52:34 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/14 17:12:13 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>
int	isalnum(int c)
{
	if (isalpha(c) == 0 && isdigit(c) == 0)
		return (0);
	return (1);
}

int	main()
{
	char	*tab = "123 456fd";

	int	i = 0;
	while (tab[i])
	{
		if (isalnum(tab[i]) == 0)
			return 0;
		i++;
	}
	return (1);
}
