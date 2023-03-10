/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:16:22 by mtortrot          #+#    #+#             */
/*   Updated: 2023/01/18 16:32:22 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;

	i = -1;
	if (dest == NULL)
		dest_len = 0;
	else
		dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	while ((dest_len + ++i) < (size - 1) && src[i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = 0;
	return (dest_len + ft_strlen(src));
}
