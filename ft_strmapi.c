#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tab;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
char	ft_test(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	char	*str = "abcdef";
	char	*res = ft_strmapi(str, ft_test);

	printf("%s\n", res);
}
*/
