/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 17:36:04 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 13:58:01 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_firstindex(const char *s1, const char *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	if (s1[i] == '\0')
		return (0);
	return (i);
}

int		ft_lastindex(const char *s1, const char *set)
{
	int i;
	int j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] && s1[i] && i >= 0)
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		first;
	int		last;

	if (set[0] == '\0' || s1[0] == '\0')
		return (ft_strdup(s1));
	dest = NULL;
	first = ft_firstindex(s1, set);
	last = ft_lastindex(s1, set);
	if (first > last)
		return (NULL);
	if (!(dest = malloc((last - first + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(dest, s1 + first, last - first);
	last = last - first;
	dest[last] = '\0';
	return (dest);
}
