/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:52:34 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/16 16:05:14 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main()
{
	char	*tab = "123456fd";

	int	i = 0;

	while (tab[i])
	{
		if (ft_isalnum(tab[i]) == 0)
		{
			printf("%s\n", "error");
			return (0);
		}
		i++;
	}
	return (1);

}
*/
