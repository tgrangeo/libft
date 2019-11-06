/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:47:42 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 16:35:40 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int i;
	unsigned long int j;

	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	i = 0;
	if (needle[0] == '\0')
		return ((void*)haystack);
	if (len <= 0)
		return (0);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((void*)haystack + i);
			else if (j == len - 1)
				return ((void*)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
