/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:42:02 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:29:03 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *start;
	const char *str;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		start = haystack;
		str = needle;
		while (*haystack && *needle && *haystack == *str)
		{
			haystack++;
			str++;
		}
		if (!*str)
			return ((char *)start);
		haystack = start + 1;
	}
	return (NULL);
}
