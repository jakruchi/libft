

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>


int	main(void)
{
	unsigned int	nmemb = 4294967295;
	int size = 100;
	int result = nmemb + size;

	printf("%d", result);

	return (0);
}