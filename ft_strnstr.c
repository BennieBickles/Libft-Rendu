/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:17:13 by mtortrot          #+#    #+#             */
/*   Updated: 2022/12/16 15:02:46 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big && !len)
		return (NULL);
	i = ft_strlen(little);
	if (!i)
		return ((char *)big);
	while (*big && i <= len--)
	{
		if (!ft_strncmp(big, little, i))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
