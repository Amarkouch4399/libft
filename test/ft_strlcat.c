/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:22:01 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/18 17:50:39 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_len(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;


	i = 0;
	while (i < size - 1  && src[i])
	{
		tab_dest[i] = tab_src[i];
		i++;
	}
	tab_dest[i] = '\0';
	return (ft_len(tab_dest) + ft_len(tab_src));
}
int	main()
{
	char	src[7] = "oussama";
	char	dst[7];

	printf ("%ld\n", ft_strlcat(dst, src, 3));
	printf("%s\n", dst);

}
