#include "libft.h"
#include <stdio.h>

int main(void)
{
	char str[] = "coucou bonjour";

	ft_strmapi(str, ft_toupper);
	printf("%s", str);
	return(0);
}