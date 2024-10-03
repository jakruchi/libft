

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>


int	main(void)
{

	char *buffer7 = (char *)malloc(50);
    char *buffer8 = (char *)malloc(50);
	if (!buffer7 || !buffer8) {
        perror("Failed to allocate memory");
        return 1;
    }
	memset(buffer8, 55, 50);
	buffer8[5] = '\0';

	printf("%zu\n", strlcpy(buffer7, buffer8, 50));
	printf("%s", buffer7);
	return (0);
}