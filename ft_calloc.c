/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:00:26 by jlara-na          #+#    #+#             */
/*   Updated: 2022/07/12 19:17:00 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	mul;

	mul = ((size_t)count * (size_t)size);
	if (mul < count || mul < size)
		return (NULL);
	str = malloc(mul);
	if (!str)
		return (NULL);
	ft_bzero(str, mul);
	return (str);
}
