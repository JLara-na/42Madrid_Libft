/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:02:15 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/16 20:31:26 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(int ac, char **av)
{
//	char	*t = av[1];
	char	l = av[1][0];

	if (ac == 2)
	{
		printf("ft_isalpha -----> %d\n", ft_isalpha(l));
		printf("ft_isdigit -----> %d\n", ft_isdigit(l));
		printf("ft_isalnum -----> %d\n", ft_isalnum(l));
		printf("ft_isascii -----> %d\n", ft_isascii(l));
		printf("ft_isprint -----> %d\n", ft_isprint(l));
	}
	else
		return (0);
}
