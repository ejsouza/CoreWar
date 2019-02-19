/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_labels_make_add.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:41:23 by dshults           #+#    #+#             */
/*   Updated: 2018/12/18 16:57:40 by esouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_labels	*make_label(char **line, int len, int p)
{
	t_labels		*label;

	if (!(label = ft_memalloc(sizeof(t_labels))))
		exit(EXIT_FAILURE);
	if (len > 0)
		label->name = ft_strndup(line[0], len);
	else
		label->name = 0;
	label->position = p;
	label->bytes = 1;
	return (label);
}

void		add_to_label_list_end(t_data *d, t_labels *label)
{
	if (!d->first_label)
	{
		d->first_label = label;
		d->last_label = d->first_label;
	}
	else
	{
		d->last_label->next = label;
		d->last_label = d->last_label->next;
	}
}
