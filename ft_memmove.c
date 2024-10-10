/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:51:49 by jakruchi          #+#    #+#             */
/*   Updated: 2024/10/04 19:35:44 by jakruchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;
	i = n - 1;
	if (!d && !s)
		return (NULL);
	if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}