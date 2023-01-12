#include "libft.h"
#include <stdio.h>

int main(void)
{
	char str[] = "testcoucou bonjour test";
	char set[] = "test";

	printf("%s\n", ft_strtrim(str, set));
	return(0);
}