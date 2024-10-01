/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:26:59 by jakruchi          #+#    #+#             */
/*   Updated: 2024/10/01 20:27:53 by jakruchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// c main.c -L. -lft -I.

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

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

	size_t size = 10;
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

	printf("==================bzero==================\n");
	bzero(buffer1, 7);
    print_memory(buffer1, 20);
	printf("==================ft_bzero==================\n");
	ft_bzero(buffer2, 7);
    print_memory(buffer2, 20);
	free(buffer1);
    free(buffer2);
	
	// c main.c -L. -lft -I.
	return (0);
}