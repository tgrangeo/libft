/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/04 10:30:52 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 14:32:45 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst1;
	const char	*src1;
	size_t		i;
	size_t		len;

	dst1 = dst;
	src1 = src;
	i = size;
	while (i-- != 0 && *dst1 != '\0')
		dst1++;
	len = dst1 - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(src1));
	while (*src1 != '\0')
	{
		if (i != 1)
		{
			*dst1++ = *src1;
			i--;
		}
		src1++;
	}
	*dst1 = '\0';
	return (len + (src1 - src));
}
