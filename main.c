#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = ft_calloc(5, sizeof(char));

	str = "Salutsadfsag";
	printf("%s\n", str);
	return(0);
}