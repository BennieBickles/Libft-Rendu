/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:17:55 by mtortrot          #+#    #+#             */
/*   Updated: 2023/01/18 16:33:43 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	a;
	size_t	z;
	char	*s;

	a = 0;
	s = NULL;
	if (set == NULL || s1 == NULL)
		return (NULL);
	z = ft_strlen(s1);
	if (s1 && set)
	{
		while (z > a && ft_strchr(set, s1[z - 1]) && s1[z - 1])
			z--;
		while (a < z && ft_strchr(set, s1[a]) && s1[a])
			a++;
		s = (char *)malloc(sizeof(char) * (z - a + 1));
		if (s)
			ft_strlcpy(s, s1 + a, z - a + 1);
	}
	return (s);
}
