/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:11:21 by rlauret           #+#    #+#             */
/*   Updated: 2017/11/09 17:12:18 by rlauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (!(ft_strncmp(s1, s2, n)));
}
