/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:05:06 by rlauret           #+#    #+#             */
/*   Updated: 2017/11/09 17:10:56 by rlauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

int	ft_strequ(char const *s1, char const *s2)
{
	return (!(ft_strcmp(s1, s2)));
}
