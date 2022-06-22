/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:02:15 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/21 19:41:35 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(int ac, char **av)
{
	char	*t = av[1];
	char	l = av[1][0];
	if (ac == 2)
	{
		printf("ft_isalpha    	  -----> %d\n", ft_isalpha(l));
		printf("ft_isdigit     	  -----> %d\n", ft_isdigit(l));
		printf("ft_isalnum     	  -----> %d\n", ft_isalnum(l));
		printf("ft_isascii    	  -----> %d\n", ft_isascii(l));
		printf("ft_isprint   	  -----> %d\n", ft_isprint(l));
		printf("ft_strlen    	  -----> %zu\n", ft_strlen(t));
	//	printf("ft_memset (2)	  -----> %s\n", ft_memset(t, 'x', 2));
	//	printf("ft_bzero (nada)   -----> %s\n", t);
	//	printf("ft_memcpy (3)     -----> %s\n", ft_memcpy(x, t, 3));
	//	printf("%s\n", ft_memmove(t, t + 2, 2));
		printf("%d\n", ft_atoi(t));
	//	printf("%d\n", INT_MAX + 2341);
		printf("%d\n", INT_MIN);
		printf("%d\n", atoi(t));


	}
	return (0);
}
