/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:04:18 by jakruchi          #+#    #+#             */
/*   Updated: 2024/10/11 20:37:47 by jakruchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (len);
}

static void	ft_fill_array(char *ptr, size_t len, int n)
{
	if 
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = ft_count_char(n)
	ptr = (char *)malloc((len + 1) * sizeof(char))
	if (!ptr)
		return (NULL);
	
	ptr[len + 1] = '\0';
	return (ptr);
}