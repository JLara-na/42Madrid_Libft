/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:02:15 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/23 20:57:17 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "12345";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
