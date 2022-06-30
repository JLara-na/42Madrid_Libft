/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:53:00 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/30 13:27:02 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	if (start >= len)
		return (substr);
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	return (substr);
}
