/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:26:59 by jakruchi          #+#    #+#             */
/*   Updated: 2024/09/30 17:37:13 by jakruchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

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
	// const char	*empty = "";
	// const char	*empty = "";
	// const char	*empty = "";
	// const char	*empty = "";
	// const char	*empty = "";

	
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
	
	return (0);
}