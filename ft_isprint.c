/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:27:16 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/16 20:33:28 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int j)
{
	return (j > 31 && j < 128);
}
