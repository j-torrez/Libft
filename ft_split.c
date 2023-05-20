/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:53:41 by jtorrez-          #+#    #+#             */
/*   Updated: 2023/05/20 14:04:02 by jtorrez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *count -> numbers of substring are
	*count = 0, we are dereferencing the pointer
	to actually set the value that is pointing to 0*/
#include "libft.h"
#include <stdio.h>

/*
static int count_substr(char *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}	*/

size_t wordlen(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

size_t wordcount(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i += wordlen(&s[i], c);
		}
		else
			i++;
	}
	return (count);
}

char *wordcpy(char *dst, const char *src, char c)
{
	int i;

	i = 0;
	while (src[i] != c && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char **ft_free(char **ret, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	char **ret;

	if (s == NULL)
		return (NULL);
	if (!(ret = malloc((wordcount(s, c) + 2) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(ret[j] = malloc(((wordlen(&s[i], c) + 2)) * sizeof(char))))
				return (ft_free(ret, j));
			wordcpy(ret[j], &s[i], c);
			j++;
			i += wordlen(&s[i], c);
		}
		else
			i++;
	}
	ret[j] = NULL;
	return (ret);
}
/*
int main(void)
{
	int result;
	char s[] = " He lo Wo rld How ds sd s sdsd sdsd sd";
	result = ft_split(s, ' ');
	printf("Total substring is: %d\n", result);
	return (0);
}	*/
