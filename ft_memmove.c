/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:33:50 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 10:33:53 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;
	int				size;

	size = len;
	i = 0;
	tmp_dst = (unsigned char*)dst;
	tmp_src = (unsigned char*)src;
	if (!(dst || src))
		return (NULL);
	if (src < dst)
		while (size > 0)
		{
			size--;
			*(tmp_dst + size) = *(tmp_src + size);
		}
	else
		while (i < len)
		{
			*(tmp_dst + i) = *(tmp_src + i);
			i++;
		}
	dst = tmp_dst;
	return (dst);
}
