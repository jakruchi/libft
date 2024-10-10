/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:44:56 by jakruchi          #+#    #+#             */
/*   Updated: 2024/10/04 16:11:22 by jakruchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	s_len;

	ptr = (char *)s;
	s_len = ft_strlen(s);
	while (ptr[s_len] != (char)c)
	{
		if (s_len == 0)
			return (NULL);
		s_len--;
	}
	return (ptr + s_len);
}
