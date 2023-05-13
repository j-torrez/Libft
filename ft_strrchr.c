/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:38:45 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/12 16:48:57 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*By adding 'i' to the base address 's' we move the pointer
to the position just after the last character
of the string which is the null character is located*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
