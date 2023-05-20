/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:41:59 by jtorrez-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/20 15:04:51 by jtorrez-         ###   ########.fr       */
=======
/*   Updated: 2023/05/12 17:06:33 by jtorrez-         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (!c)
	{
		return ((char *)s);
	}
	return (0);
}
