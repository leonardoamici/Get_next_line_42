/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:31:37 by lamici            #+#    #+#             */
/*   Updated: 2022/10/26 16:53:46 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;
	int		x;

	x = 0;
	p = (char *) str;
	while (p[x] != '\0')
	{
		if (p[x] == c)
			return (&p[x]);
		else
			x++;
	}
	if (p[x] == c)
		return (&p[x]);
	return (0);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p || !s1 || !s2)
		return (0);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

void	*ft_calloc(size_t num, size_t dim)
{
	void		*ptr;
	char		*d;
	size_t		x;

	ptr = malloc(num * dim);
	if (ptr == 0)
		return (0);
	d = (char *)ptr;
	x = 0;
	while (x < dim * num)
	{
		d[x] = '\0';
		x++;
	}
	return (ptr);
}
