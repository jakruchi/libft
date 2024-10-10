/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:26:59 by jakruchi          #+#    #+#             */
/*   Updated: 2024/10/10 16:20:42 by jakruchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <bsd/string.h>

void print_memory(const void *buffer, size_t size) {
    const unsigned char *byte_buffer = (const unsigned char *)buffer;
    for (size_t i = 0; i < size; i++) {
        printf("%02X ", byte_buffer[i]);
    }
    printf("\n");
}

int	main()
{
	int	int_value_of_a = 97;
	int	int_value_of_Z = 90;
	int	int_value_of_question_mark = 63;
	int	int_value_of_curly_bracket = 123;
	int	int_value_of_u = 117;
	int	int_value_of_space = 32;

	int	int_value_of_0 = 48;
	int	int_value_of_9 = 57;
	int	int_value_of_3 = 51;

	int	int_minus_12 = -12;
	int	int_127 = 127;
	int	int_128 = 128;

	const char	*empty = "";
	const char	*hello_world = "Hello World!";
	const char	*only_digits = "12345678901324657";
	
	int	int_value_of_A = 65;
	int	int_value_of_z = 122;
	int	int_value_of_d = 100;
	int	int_value_of_D = 68;

	size_t size = 20;
    char *buffer1 = (char *)malloc(size);
    char *buffer2 = (char *)malloc(size);
	if (!buffer1 || !buffer2) {
        perror("Failed to allocate memory");
        return 1;
    }
	
	printf("==================isalpha==================\n");
	printf("a: %d\n", isalpha(int_value_of_a));
	printf("Z: %d\n", isalpha(int_value_of_Z));
	printf("?: %d\n", isalpha(int_value_of_question_mark));
	printf("{: %d\n", isalpha(int_value_of_curly_bracket));
	printf("u: %d\n", isalpha(int_value_of_u));
	printf("space: %d\n", isalpha(int_value_of_space));
	printf("===============ft_isalpha==================\n");
	printf("a: %d\n", ft_isalpha(int_value_of_a));
	printf("Z: %d\n", ft_isalpha(int_value_of_Z));
	printf("?: %d\n", ft_isalpha(int_value_of_question_mark));
	printf("{: %d\n", ft_isalpha(int_value_of_curly_bracket));
	printf("u: %d\n", ft_isalpha(int_value_of_u));
	printf("space: %d\n", ft_isalpha(int_value_of_space));
	printf("\n");
	
	printf("==================isdigit==================\n");
	printf("a: %d\n", isdigit(int_value_of_a));
	printf("Z: %d\n", isdigit(int_value_of_Z));
	printf("?: %d\n", isdigit(int_value_of_question_mark));
	printf("{: %d\n", isdigit(int_value_of_curly_bracket));
	printf("u: %d\n", isdigit(int_value_of_u));
	printf("space: %d\n", isdigit(int_value_of_space));
	printf("0: %d\n", isdigit(int_value_of_0));
	printf("9: %d\n", isdigit(int_value_of_9));
	printf("3: %d\n", isdigit(int_value_of_3));
	printf("===============ft_isdigit==================\n");
	printf("a: %d\n", ft_isdigit(int_value_of_a));
	printf("Z: %d\n", ft_isdigit(int_value_of_Z));
	printf("?: %d\n", ft_isdigit(int_value_of_question_mark));
	printf("{: %d\n", ft_isdigit(int_value_of_curly_bracket));
	printf("u: %d\n", ft_isdigit(int_value_of_u));
	printf("space: %d\n", ft_isdigit(int_value_of_space));
	printf("0: %d\n", ft_isdigit(int_value_of_0));
	printf("9: %d\n", ft_isdigit(int_value_of_9));
	printf("3: %d\n", ft_isdigit(int_value_of_3));
	printf("\n");

	printf("==================isalnum==================\n");
	printf("a: %d\n", isalnum(int_value_of_a));
	printf("Z: %d\n", isalnum(int_value_of_Z));
	printf("?: %d\n", isalnum(int_value_of_question_mark));
	printf("{: %d\n", isalnum(int_value_of_curly_bracket));
	printf("u: %d\n", isalnum(int_value_of_u));
	printf("space: %d\n", isalnum(int_value_of_space));
	printf("0: %d\n", isalnum(int_value_of_0));
	printf("9: %d\n", isalnum(int_value_of_9));
	printf("3: %d\n", isalnum(int_value_of_3));
	printf("===============ft_isdigit==================\n");
	printf("a: %d\n", ft_isalnum(int_value_of_a));
	printf("Z: %d\n", ft_isalnum(int_value_of_Z));
	printf("?: %d\n", ft_isalnum(int_value_of_question_mark));
	printf("{: %d\n", ft_isalnum(int_value_of_curly_bracket));
	printf("u: %d\n", ft_isalnum(int_value_of_u));
	printf("space: %d\n", ft_isalnum(int_value_of_space));
	printf("0: %d\n", ft_isalnum(int_value_of_0));
	printf("9: %d\n", ft_isalnum(int_value_of_9));
	printf("3: %d\n", ft_isalnum(int_value_of_3));
	printf("\n");

	printf("==================isascii==================\n");
	printf("a: %d\n", isascii(int_value_of_a));
	printf("Z: %d\n", isascii(int_value_of_Z));
	printf("?: %d\n", isascii(int_value_of_question_mark));
	printf("{: %d\n", isascii(int_value_of_curly_bracket));
	printf("u: %d\n", isascii(int_value_of_u));
	printf(" : %d\n", isascii(int_value_of_space));
	printf("0: %d\n", isascii(int_value_of_0));
	printf("9: %d\n", isascii(int_value_of_9));
	printf("3: %d\n", isascii(int_value_of_3));
	printf("-12: %d\n", isascii(int_minus_12 ));
	printf("127: %d\n", isascii(int_127));
	printf("128: %d\n", isascii(int_128));
	printf("int max: %d\n", isascii(INT_MAX));
	printf("int min: %d\n", isascii(INT_MIN));
	printf("===============ft_isascii==================\n");
	printf("a: %d\n", ft_isascii(int_value_of_a));
	printf("Z: %d\n", ft_isascii(int_value_of_Z));
	printf("?: %d\n", ft_isascii(int_value_of_question_mark));
	printf("{: %d\n", ft_isascii(int_value_of_curly_bracket));
	printf("u: %d\n", ft_isascii(int_value_of_u));
	printf(" : %d\n", ft_isascii(int_value_of_space));
	printf("0: %d\n", ft_isascii(int_value_of_0));
	printf("9: %d\n", ft_isascii(int_value_of_9));
	printf("3: %d\n", ft_isascii(int_value_of_3));
	printf("-12: %d\n", ft_isascii(int_minus_12 ));
	printf("127: %d\n", ft_isascii(int_127));
	printf("128: %d\n", ft_isascii(int_128));
	printf("int max: %d\n", ft_isascii(INT_MAX));
	printf("int min: %d\n", ft_isascii(INT_MIN));
	printf("\n");

	printf("==================isprint==================\n");
	printf("a: %d\n", isprint(int_value_of_a));
	printf("Z: %d\n", isprint(int_value_of_Z));
	printf("?: %d\n", isprint(int_value_of_question_mark));
	printf("{: %d\n", isprint(int_value_of_curly_bracket));
	printf("u: %d\n", isprint(int_value_of_u));
	printf(" : %d\n", isprint(int_value_of_space));
	printf("0: %d\n", isprint(int_value_of_0));
	printf("9: %d\n", isprint(int_value_of_9));
	printf("3: %d\n", isprint(int_value_of_3));
	printf("-12: %d\n", isprint(int_minus_12 ));
	printf("127: %d\n", isprint(int_127));
	printf("128: %d\n", isprint(int_128));
	// printf("int max: %d\n", isprint(INT_MAX)); segfault
	// printf("int min: %d\n", isprint(INT_MIN));
	printf("===============ft_isprint==================\n");
	printf("a: %d\n", ft_isprint(int_value_of_a));
	printf("Z: %d\n", ft_isprint(int_value_of_Z));
	printf("?: %d\n", ft_isprint(int_value_of_question_mark));
	printf("{: %d\n", ft_isprint(int_value_of_curly_bracket));
	printf("u: %d\n", ft_isprint(int_value_of_u));
	printf(" : %d\n", ft_isprint(int_value_of_space));
	printf("0: %d\n", ft_isprint(int_value_of_0));
	printf("9: %d\n", ft_isprint(int_value_of_9));
	printf("3: %d\n", ft_isprint(int_value_of_3));
	printf("-12: %d\n", ft_isprint(int_minus_12 ));
	printf("127: %d\n", ft_isprint(int_127));
	printf("128: %d\n", ft_isprint(int_128));
	printf("int max: %d\n", ft_isprint(INT_MAX));
	printf("int min: %d\n", ft_isprint(INT_MIN));
	printf("\n");

	printf("==================strlen==================\n");
	printf("empty:       %zu\n", strlen(empty));
	printf("hello world: %zu\n", strlen(hello_world));
	printf("only_digits: %zu\n", strlen(only_digits));
	printf("===============ft_strlen==================\n");
	printf("empty:       %zu\n", ft_strlen(empty));
	printf("hello world: %zu\n", ft_strlen(hello_world));
	printf("only_digits: %zu\n", ft_strlen(only_digits));
	printf("\n");
	
	printf("==================toupper==================\n");
	printf("a:       %d\n", toupper(int_value_of_a));
	printf("Z:       %d\n", toupper(int_value_of_Z));
	printf("?:       %d\n", toupper(int_value_of_question_mark));
	printf("{:       %d\n", toupper(int_value_of_curly_bracket));
	printf("u:       %d\n", toupper(int_value_of_u));
	printf(" :       %d\n", toupper(int_value_of_space));
	printf("0:       %d\n", toupper(int_value_of_0));
	printf("9:       %d\n", toupper(int_value_of_9));
	printf("3:       %d\n", toupper(int_value_of_3));
	printf("-12:     %d\n", toupper(int_minus_12 ));
	printf("127:     %d\n", toupper(int_127));
	printf("128:     %d\n", toupper(int_128));
	printf("int max: %d\n", toupper(INT_MAX));
	printf("int min: %d\n", toupper(INT_MIN));
	printf("A:       %c\n", toupper(int_value_of_A));
	printf("z:       %c\n", toupper(int_value_of_z));
	printf("d:       %c\n", toupper(int_value_of_d));
	printf("D:       %c\n", toupper(int_value_of_D));
	printf("===============ft_toupper==================\n");
	printf("a:       %d\n", ft_toupper(int_value_of_a));
	printf("Z:       %d\n", ft_toupper(int_value_of_Z));
	printf("?:       %d\n", ft_toupper(int_value_of_question_mark));
	printf("{:       %d\n", ft_toupper(int_value_of_curly_bracket));
	printf("u:       %d\n", ft_toupper(int_value_of_u));
	printf(" :       %d\n", ft_toupper(int_value_of_space));
	printf("0:       %d\n", ft_toupper(int_value_of_0));
	printf("9:       %d\n", ft_toupper(int_value_of_9));
	printf("3:       %d\n", ft_toupper(int_value_of_3));
	printf("-12:     %d\n", ft_toupper(int_minus_12 ));
	printf("127:     %d\n", ft_toupper(int_127));
	printf("128:     %d\n", ft_toupper(int_128));
	printf("int max: %d\n", ft_toupper(INT_MAX));
	printf("int min: %d\n", ft_toupper(INT_MIN));
	printf("A:       %c\n", ft_toupper(int_value_of_A));
	printf("z:       %c\n", ft_toupper(int_value_of_z));
	printf("d:       %c\n", ft_toupper(int_value_of_d));
	printf("D:       %c\n", ft_toupper(int_value_of_D));
	printf("\n");
	
	printf("==================tolower==================\n");
	printf("a:       %d\n", tolower(int_value_of_a));
	printf("Z:       %d\n", tolower(int_value_of_Z));
	printf("?:       %d\n", tolower(int_value_of_question_mark));
	printf("{:       %d\n", tolower(int_value_of_curly_bracket));
	printf("u:       %d\n", tolower(int_value_of_u));
	printf(" :       %d\n", tolower(int_value_of_space));
	printf("0:       %d\n", tolower(int_value_of_0));
	printf("9:       %d\n", tolower(int_value_of_9));
	printf("3:       %d\n", tolower(int_value_of_3));
	printf("-12:     %d\n", tolower(int_minus_12 ));
	printf("127:     %d\n", tolower(int_127));
	printf("128:     %d\n", tolower(int_128));
	printf("int max: %d\n", tolower(INT_MAX));
	printf("int min: %d\n", tolower(INT_MIN));
	printf("A:       %c\n", tolower(int_value_of_A));
	printf("z:       %c\n", tolower(int_value_of_z));
	printf("d:       %c\n", tolower(int_value_of_d));
	printf("D:       %c\n", tolower(int_value_of_D));
	printf("===============ft_tolower==================\n");
	printf("a:       %d\n", ft_tolower(int_value_of_a));
	printf("Z:       %d\n", ft_tolower(int_value_of_Z));
	printf("?:       %d\n", ft_tolower(int_value_of_question_mark));
	printf("{:       %d\n", ft_tolower(int_value_of_curly_bracket));
	printf("u:       %d\n", ft_tolower(int_value_of_u));
	printf(" :       %d\n", ft_tolower(int_value_of_space));
	printf("0:       %d\n", ft_tolower(int_value_of_0));
	printf("9:       %d\n", ft_tolower(int_value_of_9));
	printf("3:       %d\n", ft_tolower(int_value_of_3));
	printf("-12:     %d\n", ft_tolower(int_minus_12 ));
	printf("127:     %d\n", ft_tolower(int_127));
	printf("128:     %d\n", ft_tolower(int_128));
	printf("int max: %d\n", ft_tolower(INT_MAX));
	printf("int min: %d\n", ft_tolower(INT_MIN));
	printf("A:       %c\n", ft_tolower(int_value_of_A));
	printf("z:       %c\n", ft_tolower(int_value_of_z));
	printf("d:       %c\n", ft_tolower(int_value_of_d));
	printf("D:       %c\n", ft_tolower(int_value_of_D));
	printf("\n");
	
	printf("==================memset==================\n");
	memset(buffer1, 65000, 15);
    print_memory(buffer1, 20);
	printf("==================ft_memset==================\n");
	ft_memset(buffer2, 65000, 15);
    print_memory(buffer2, 20);
	printf("\n");

	printf("==================bzero==================\n");
	bzero(buffer1, 7);
    print_memory(buffer1, size);
	printf("==================ft_bzero==================\n");
	ft_bzero(buffer2, 7);
    print_memory(buffer2, size);
	free(buffer1);
    free(buffer2);
	printf("\n");

	size_t size2 = 20;
    char *buffer3 = (char *)malloc(size2);
    char *buffer4 = (char *)malloc(size2);
	if (!buffer3 || !buffer4) {
        perror("Failed to allocate memory");
        return 1;
    }
	memset(buffer3, 55, 15);
	printf("==================memcpy==================\n");
	ft_bzero(buffer4, 20);
	memcpy(buffer4, buffer3, 10);
    print_memory(buffer4, 20);
	printf("==================ft_memcpy==================\n");
	ft_bzero(buffer4, 20);
	ft_memcpy(buffer4, buffer3, 10);
    print_memory(buffer4, size2);
	free(buffer3);
    free(buffer4);
	printf("\n");
	
	size_t size3 = 20;
    char *buffer5 = (char *)malloc(size3);
    char *buffer6 = (char *)malloc(size3);
	if (!buffer5 || !buffer6) {
        perror("Failed to allocate memory");
        return 1;
    }
	// void	*ptr1 = NULL;
	// void	*ptr2 = NULL;
	memset(buffer5, 55, 15);
	printf("==================memmove==================\n");
	ft_bzero(buffer6, 20);
	memmove(buffer6, buffer5, 10);
    print_memory(buffer6, size3);
	printf("==================ft_memmove==================\n");
	ft_bzero(buffer6, 20);
	ft_memmove(buffer6, buffer5, 10);
    print_memory(buffer6, size3);
	free(buffer5);
    free(buffer6);
	printf("\n");

	char *buffer7 = (char *)malloc(50);
    char *buffer8 = (char *)malloc(50);
	if (!buffer7 || !buffer8) {
        perror("Failed to allocate memory");
        return 1;
    }
	memset(buffer8, 55, 50);
	memset(buffer7, 55, 50);
	buffer8[25] = '\0';
	buffer7[49] = '\0';
	const char	*src1 = "Hello World";
	const char	*src2 = "123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a";
	printf("==================strlcpy==================\n");
	printf("return: %zu str: %s\n", strlcpy(buffer7, src1, 5), buffer7);
	printf("return: %zu str: %s\n", strlcpy(buffer8, src2, 30), buffer8);
	printf("===============ft_strlcpy==================\n");
	memset(buffer8, 55, 50);
	memset(buffer7, 55, 50);
	buffer8[25] = '\0';
	buffer7[49] = '\0';
	printf("return: %zu str: %s\n", ft_strlcpy(buffer7, src1, 5), buffer7);
	printf("return: %zu str: %s\n", ft_strlcpy(buffer8, src2, 30), buffer8);
	printf("\n");
	free(buffer7);
	free(buffer8);
	
	char *buffer9 = (char *)malloc(50);
    char *buffer10 = (char *)malloc(100);
	if (!buffer9 || !buffer10) {
        perror("Failed to allocate memory");
        return 1;
    }
	const char	*src3 = "Hello World";
	const char	*src4 = "123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a";
	// void	*ptr1 = NULL;
	// void	*ptr2 = NULL;
	printf("==================strlcat==================\n");
	memset(buffer9, 55, 50);
	memset(buffer10, 55, 50);
	buffer9[5] = '\0';
	buffer10[49] = '\0';
	printf("return: %zu str: %s\n", strlcat(buffer9, src3, 30), buffer9);
	printf("return: %zu str: %s\n", strlcat(buffer10, src4, 100), buffer10);
	printf("===============ft_strlcat==================\n");
	memset(buffer9, 55, 50);
	memset(buffer10, 55, 50);
	buffer9[5] = '\0';
	buffer10[49] = '\0';
	printf("return: %zu str: %s\n", ft_strlcat(buffer9, src3, 30), buffer9);
	printf("return: %zu str: %s\n", ft_strlcat(buffer10, src4, 100), buffer10);
	printf("\n");
	free(buffer9);
	free(buffer10);
	
	printf("==================strchr==================\n");
	printf("empty 7:       %s\n", strchr(empty, 55));
	printf("hello world W: %s\n", strchr(hello_world, 87));
	printf("only_digits 7: %s\n", strchr(only_digits, 55));
	printf("hello world 7: %s\n", strchr(hello_world, 55));
	printf("only_digits W: %s\n", strchr(only_digits, 87));
	printf("===============ft_strchr==================\n");
	printf("empty 7:       %s\n", ft_strchr(empty, 55));
	printf("hello world W: %s\n", ft_strchr(hello_world, 87));
	printf("only_digits 7: %s\n", ft_strchr(only_digits, 55));
	printf("hello world 7: %s\n", ft_strchr(hello_world, 55));
	printf("only_digits W: %s\n", ft_strchr(only_digits, 87));
	printf("\n");
	
	printf("==================strrchr==================\n");
	printf("empty 7:       %s\n", strrchr(empty, 55));
	printf("hello world W: %s\n", strrchr(hello_world, 87));
	printf("only_digits 4: %s\n", strrchr(only_digits, 52));
	printf("hello world 4: %s\n", strrchr(hello_world, 52));
	printf("only_digits W: %s\n", strrchr(only_digits, 87));
	printf("===============ft_strrchr==================\n");
	printf("empty 7:       %s\n", ft_strrchr(empty, 55));
	printf("hello world W: %s\n", ft_strrchr(hello_world, 87));
	printf("only_digits 4: %s\n", ft_strrchr(only_digits, 52));
	printf("hello world 4: %s\n", ft_strrchr(hello_world, 52));
	printf("only_digits W: %s\n", ft_strrchr(only_digits, 87));
	printf("\n");

	char	*buffee10 = "Welcome to hell";
	char	*buffer11 = "Welcome to hell";
	char	*buffer12 = "aWelcome to hell";
	char	*buffer13 = "Welcome to hell";
	char	*buffer14 = "Welcome to hella";
	char	*buffer15 = "";
	char	*buffer16 = "Welcome to hell";
	char	*buffer17 = "Welcome to hell";
	char	*buffer18 = ""; 
	printf("==================strncmp==================\n");
	printf("%d\n", strncmp(buffee10, buffer11, 10));
	printf("%d\n", strncmp(buffer12, buffer13, 10));
	printf("%d\n", strncmp(buffer14, buffer15, 10));
	printf("%d\n", strncmp(buffer16, buffer17, 10));
	printf("%d\n", strncmp(buffer15, buffer18, 10));
	printf("%d\n", strncmp(buffer17, buffer18, 10));
	printf("===============ft_strncmp==================\n");
	printf("%d\n", ft_strncmp(buffee10, buffer11, 10));
	printf("%d\n", ft_strncmp(buffer12, buffer13, 10));
	printf("%d\n", ft_strncmp(buffer14, buffer15, 10));
	printf("%d\n", ft_strncmp(buffer16, buffer17, 10));
	printf("%d\n", ft_strncmp(buffer15, buffer18, 10));
	printf("%d\n", ft_strncmp(buffer17, buffer18, 10));
	printf("\n");
	
	size_t size4 = 200;
    char *buffer19 = (char *)malloc(size4);
    char *buffer20 = (char *)malloc(size4);
	if (!buffer19 || !buffer20) {
        perror("Failed to allocate memory");
        return 1;
    }
	// void	*ptr1 = NULL;
	// void	*ptr2 = NULL;
	printf("==================memchr==================\n");
	ft_bzero(buffer19, size4);
	buffer19[10] = 55;
    print_memory(memchr(buffer19, 55, 15), 5);
	// print_memory(memchr(buffer19, 55, 5), 15);
	printf("===============ft_memchr==================\n");
	ft_bzero(buffer20, size4);
	buffer20[10] = 55;
    print_memory(ft_memchr(buffer20, 55, 15), 5);
	// print_memory(ft_memchr(buffer20, 55, 5), 15);
	free(buffer19);
    free(buffer20);
	printf("\n");
	
	char *buffer21 = (char *)malloc(50);
    char *buffer22 = (char *)malloc(100);
	char *buffer23 = (char *)malloc(100);
	if (!buffer21 || !buffer22) {
        perror("Failed to allocate memory");
        return 1;
    }
	// const char	*src3 = "Hello World";
	// const char	*src4 = "123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a123456789654asd6f8as6d5f6as8d7f6a";
	// void	*ptr1 = NULL;
	// void	*ptr2 = NULL;
	printf("==================memcmp==================\n");
	memset(buffer21, 0, 50);
	memset(buffer22, 0, 50);
	memset(buffer23, 0, 50);
	buffer21[5] = 55;
	buffer22[49] = 120;
	printf("return: %d\n", memcmp(buffer21, buffer22, 30));
	printf("return: %d\n", memcmp(buffer22, buffer23, 30));
	printf("return: %d\n", memcmp(buffer22, buffer23, 100));
	printf("===============ft_memcmp==================\n");
	memset(buffer21, 0, 50);
	memset(buffer22, 0, 50);
	memset(buffer23, 0, 50);
	buffer21[5] = 55;
	buffer22[49] = 120;
	printf("return: %d\n", ft_memcmp(buffer21, buffer22, 30));
	printf("return: %d\n", ft_memcmp(buffer22, buffer23, 30));
	printf("return: %d\n", ft_memcmp(buffer22, buffer23, 100));
	free(buffer21);
	free(buffer22);
	free(buffer23);
	printf("\n");
	
	
	const char	*src5 = "Hello World";
	const char	*src6 = "Wo";
	printf("==================strnstr==================\n");
	printf("return: %s\n", strnstr(src5, src6, 30));
	printf("return: %s\n", strnstr(src6, src5, 30));
	printf("return: %s\n", strnstr(src5, src6, 0));
	printf("return: %s\n", strnstr(src5, src6, 5));
	printf("===============ft_strnstr==================\n");
	printf("return: %s\n", ft_strnstr(src5, src6, 30));
	printf("return: %s\n", ft_strnstr(src6, src5, 30));
	printf("return: %s\n", ft_strnstr(src5, src6, 0));
	printf("return: %s\n", ft_strnstr(src5, src6, 5));
	printf("\n");

	const char	*src7 = "Hello World";
	const char	*src8 = "Wo";
	const char	*src9 = "";
	// const char	*src10 = NULL;
	const char	*src11 = "123456789465798";
	const char	*src12 = " --+-+-+--67dafd651";
	const char	*src13 = "      -----fdasd6755fda54";
	const char	*src14 = "      ++++fdasd6755fda54";
	const char	*src15 = "      ++++-fdasd6755fda54";
	const char	*src16 = "      ----+fdasd6755fda54";
	const char	*src17 = "      ++++6755fda54";
	const char	*src18 = "--6755fda54";
	const char	*src19 = "-6755fda54";
	const char	*src20 = "  \n\t -6755fda54";
	const char	*src21 = " -6755fda54";
	const char	*src22 = "+-6755fda54";
	const char	*src23 = " +6755fda54";
	const char	*src24 = "++6755fda54";
	const char	*src25 = "a5798";
	printf("==================atoi==================\n");
	printf("src7:  %d\n", atoi(src7));
	printf("src8:  %d\n", atoi(src8));
	printf("src9:  %d\n", atoi(src9));
	// printf("src10: %d\n", atoi(src10));
	printf("src11: %d\n", atoi(src11));
	printf("src12: %d\n", atoi(src12));
	printf("src13: %d\n", atoi(src13));
	printf("src14: %d\n", atoi(src14));
	printf("src15: %d\n", atoi(src15));
	printf("src16: %d\n", atoi(src16));
	printf("src17: %d\n", atoi(src17));
	printf("src18: %d\n", atoi(src18));
	printf("src19: %d\n", atoi(src19));
	printf("src20: %d\n", atoi(src20));
	printf("src21: %d\n", atoi(src21));
	printf("src22: %d\n", atoi(src22));
	printf("src23: %d\n", atoi(src23));
	printf("src24: %d\n", atoi(src24));
	printf("src25: %d\n", atoi(src25));
	printf("===============ft_atoi==================\n");
	printf("src7:  %d\n", ft_atoi(src7));
	printf("src8:  %d\n", ft_atoi(src8));
	printf("src9:  %d\n", ft_atoi(src9));
	// printf("src10: %d\n", ft_atoi(src10));
	printf("src11: %d\n", ft_atoi(src11));
	printf("src12: %d\n", ft_atoi(src12));
	printf("src13: %d\n", ft_atoi(src13));
	printf("src14: %d\n", ft_atoi(src14));
	printf("src15: %d\n", ft_atoi(src15));
	printf("src16: %d\n", ft_atoi(src16));
	printf("src17: %d\n", ft_atoi(src17));
	printf("src18: %d\n", ft_atoi(src18));
	printf("src19: %d\n", ft_atoi(src19));
	printf("src20: %d\n", ft_atoi(src20));
	printf("src21: %d\n", ft_atoi(src21));
	printf("src22: %d\n", ft_atoi(src22));
	printf("src23: %d\n", ft_atoi(src23));
	printf("src24: %d\n", ft_atoi(src24));
	printf("src25: %d\n", ft_atoi(src25));
	printf("\n");
	
	printf("==================calloc==================\n");
	void	*ptr1 = calloc(20, 4);
	void	*ptr2 = calloc(20, 0);
	void	*ptr3 = calloc(0, 4);
	void	*ptr4 = calloc(0, 0);
	void	*ptr5 = calloc(2000000, 32000);
	printf("ptr1:\n");
    print_memory(ptr1, 20 * 4);
	printf("ptr2:\n");
	print_memory(ptr2, 20 * 0);
	printf("ptr3:\n");
    print_memory(ptr3, 0 * 4);
	printf("ptr4:\n");
    print_memory(ptr4, 0 * 0);
	printf("ptr5:\n");
	if (!ptr5)
		printf("error\n");
	else
    	print_memory(ptr5, (size_t)2000000 * (size_t)32000);
	printf("==================ft_calloc==================\n");
	void	*ptr6 =  ft_calloc(20, 4);
	void	*ptr7 =  ft_calloc(20, 0);
	void	*ptr8 =  ft_calloc(0, 4);
	void	*ptr9 =  ft_calloc(0, 0);
	void	*ptr10 = ft_calloc(2000000, 32000);
	printf("ptr1:\n");
    print_memory(ptr6, 20 * 4);
	printf("ptr2:\n");
	print_memory(ptr7, 20 * 0);
	printf("ptr3:\n");
    print_memory(ptr8, 0 * 4);
	printf("ptr4:\n");
    print_memory(ptr9, 0 * 0);
	printf("ptr5:\n");
	if (!ptr10)
		printf("error\n");
	else
    	print_memory(ptr10, (size_t)2000000 * (size_t)32000);
	free(ptr1);
	free(ptr2);
	free(ptr3);
	free(ptr4);
	free(ptr5);
	free(ptr6);
	free(ptr7);
	free(ptr8);
	free(ptr9);
	free(ptr10);
	printf("\n");
	
	char	*src26 = "Welcome to hell";
	char	*src27 = "Welcome to hell";
	char	*src28 = "aWelcome to hell";
	char	*src29 = "Welcome to hell";
	char	*src30 = "Welcome to hella";
	char	*src31 = "";
	char	*src32 = "Welcome to hell";
	char	*src33 = "Welcome to hell";
	// char	*src34 = NULL; 
	printf("==================strdup==================\n");
	char	*ptr11 = strdup(src26);
	char	*ptr12 = strdup(src27);
	char	*ptr13 = strdup(src28);
	char	*ptr14 = strdup(src29);
	char	*ptr15 = strdup(src30);
	char	*ptr16 = strdup(src31);
	char	*ptr17 = strdup(src32);
	char	*ptr18 = strdup(src33);
	// char	*ptr19 = strdup(src34);
	printf("%s\n", ptr11);
	printf("%s\n", ptr12);
	printf("%s\n", ptr13);
	printf("%s\n", ptr14);
	printf("%s\n", ptr15);
	printf("%s\n", ptr16);
	printf("%s\n", ptr17);
	printf("%s\n", ptr18);
	// printf("%s\n", ptr19);
	printf("===============ft_strdup==================\n");
	char	*ptr20 = ft_strdup(src26);
	char	*ptr21 = ft_strdup(src27);
	char	*ptr22 = ft_strdup(src28);
	char	*ptr23 = ft_strdup(src29);
	char	*ptr24 = ft_strdup(src30);
	char	*ptr25 = ft_strdup(src31);
	char	*ptr26 = ft_strdup(src32);
	char	*ptr27 = ft_strdup(src33);
	// char	*ptr28 = ft_strdup(src34);
	printf("%s\n", ptr20);
	printf("%s\n", ptr21);
	printf("%s\n", ptr22);
	printf("%s\n", ptr23);
	printf("%s\n", ptr24);
	printf("%s\n", ptr25);
	printf("%s\n", ptr26);
	printf("%s\n", ptr27);
	// printf("%s\n", ptr28);
	free(ptr11);
	free(ptr12);
	free(ptr13);
	free(ptr14);
	free(ptr15);
	free(ptr16);
	free(ptr17);
	free(ptr18);
	// free(ptr19);
	free(ptr20);
	free(ptr21);
	free(ptr22);
	free(ptr23);
	free(ptr24);
	free(ptr25);
	free(ptr26);
	free(ptr27);
	// free(ptr28);
	printf("\n");
	
	return (0);
}