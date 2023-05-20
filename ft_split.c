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

/*
char **ft_split(char const *s, char c)
{
	int *count;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	*count = 0;
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if(s[i] == c)
				i++;
		}
	}
}*/
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
}

int main(void)
{
	int result;
	char s[] = " He lo Wo rld How ds sd s sdsd sdsd sd";
	result = count_substr(s, ' ');
	printf("Total substring is: %d\n", result);
	return (0);
}	*/
