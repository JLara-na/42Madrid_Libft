/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:53:00 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/22 00:33:33 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*substr;

	i = 0;
	size = ft_strlen(&s[start]);
	if (!s)
		return (NULL);
	if (size < len)
		len = size;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (start >= ft_strlen(s))
		return (substr);
	if (!substr)
		return (NULL);
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	return (substr);
}
