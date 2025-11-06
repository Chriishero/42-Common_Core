#include "libft.h"
#include <string.h>
#include <stdio.h>
int	main()
{
    char    *s = "hello woorld ?!?!?!";
    char    c = 'o';
	char	**split = ft_split(s, c);

	for (int i = 0; split != NULL && split[i]; i++)
		printf("%s\n", split[i]);
	free(split);
	return (0);
}