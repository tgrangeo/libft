/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/04 11:39:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/05 11:27:42 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_list;
	t_list	*f_elem;

	f_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst->next)
	{
		if (!(f_elem = ft_lstnew(f(lst->content))))
			ft_lstclear(&f_list, del);
		ft_lstadd_back(&f_list, f_elem);
		lst = lst->next;
	}
	if (!(f_elem = ft_lstnew(f(lst->content))))
		ft_lstclear(&f_list, del);
	ft_lstadd_back(&f_list, f_elem);
	return (f_list);
}
