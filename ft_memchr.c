/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:27:21 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 14:12:47 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			x;
	unsigned const char		*str;

	i = 0;
	x = (unsigned char)c;
	str = (unsigned const char *)s;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
