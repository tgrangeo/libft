/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:27:21 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 14:10:51 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			x;
	unsigned const char		*str;
	int						ok;

	i = 0;
	x = (unsigned char)c;
	str = (unsigned const char *)s;
	ok = 0;
	while (i < n && ok != 1)
	{
		if (str[i] == x)
			ok = 1;
		i++;
	}
	if (i >= n || ok != 1)
		return (NULL);
	return ((void *)s + (i - 1));
}
