/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:07:21 by jlara-na          #+#    #+#             */
/*   Updated: 2022/06/16 20:31:07 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

/*typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
*/
int	ft_isalpha(int j);
int	ft_isdigit(int j);
int	ft_isalnum(int j);
int	ft_isascii(int j);
int	ft_isprint(int j);

#endif
