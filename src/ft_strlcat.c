/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:54:02 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/18 17:54:09 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_len(char *tab)
{
	int	i = 0;
	while (tab[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i = 0;
	unsigned int	dst_len = ft_len(dst);
	unsigned int	src_len = ft_len((char *)src);
	unsigned int	j = dst_len;

	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
int	main()
{
	char	src[7] = "oussama";
	char	dst[7];

	printf ("%ld\n", ft_strlcat(dst, src, 3));
	printf("%s\n", dst);

}
