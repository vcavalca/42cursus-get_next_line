/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:38:18 by vcavalca          #+#    #+#             */
/*   Updated: 2021/06/03 11:48:51 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		new_dst = (unsigned char *)dst;
		new_src = (unsigned char *)src;
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst = (unsigned char *)dst + (len - 1);
		new_src = (unsigned char *)src + (len - 1);
		while (len--)
			*new_dst-- = *new_src--;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	new_s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	free((char *)s1);
	return (new_s);
}
