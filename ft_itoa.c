/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jankruchina <jankruchina@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:04:18 by jakruchi          #+#    #+#             */
/*   Updated: 2024/10/12 00:50:03 by jankruchina      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

// static void	ft_reverse_array(char *s, size_t len)
// {
// 	size_t	i;
// 	char	temp;
	
// 	i = 0;
// 	if (s[i] == '-')
// 	{
// 		i++;
// 		len += 1;
// 	}
// 	while (i < len / 2)
// 	{
// 		temp = s[i];
// 		s[i] = s[len - 1 - i];
// 		s[len - 1 - i] = temp;
// 		i++;
// 	}
// }

static size_t	ft_count_char(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	// printf("len: %zu\n", len);
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	len = ft_count_char(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
	{
		printf("malloc failed\n");
		return (NULL);
	}
	if (n == 0)
		ptr[0] = '0';
	i = 0;
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n; // maybe delete
		i++;
	}
	while (i < len)
	{
		ptr[len - 1 - i] = (n % 10) + '0';
		n = n / 10;
		// printf("i run, %d\n", ptr[i]);
		i++;
	}
	// printf("%s\n", ptr);
	ptr[len + 1] = '\0';
	return (ptr);
}

int	main(void)
{
	char *test = ft_itoa(INT_MIN);
	printf("test: %s\n", test);
	return (0);
}