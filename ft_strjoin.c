/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 16:42:24 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 16:31:08 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	if (!(s1))
		return (NULL);
	if (!(s2))
		return (NULL);
	j = 0;
	i = 0;
	if (!(new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char))))
		return (NULL);
	if (s1[j] != '\0')
	{
		while (s1[j])
			new[i++] = s1[j++];
	}
	j = 0;
	if (s2[j] != '\0')
	{
		while (s2[j])
			new[i++] = s2[j++];
	}
	new[i] = '\0';
	return (new);
}
