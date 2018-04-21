/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:49:38 by mbenkara          #+#    #+#             */
/*   Updated: 2017/12/10 14:18:06 by mbenkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;

	str = (char *)s1;
	while (*s1)
	{
		s1++;
	}
	while (*s2 && n > 0)
	{
		*s1 = *s2;
		s2++;
		s1++;
		n--;
	}
	*s1 = '\0';
	return (str);
}