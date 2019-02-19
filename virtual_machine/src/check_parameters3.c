/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfibigr <rfibigr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:12:42 by rfibigr           #+#    #+#             */
/*   Updated: 2018/12/18 17:35:37 by rfibigr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void		check_champion_extention(t_vm *vm, char *argv)
{
	int len;

	if (argv && argv[0] != '-')
	{
		len = ft_strlen(argv);
		if (len < 4)
			ft_exit_usage(vm);
		if (argv[len - 4] != '.' || argv[len - 3] != 'c'
		|| argv[len - 2] != 'o' || argv[len - 1] != 'r')
			ft_exit_usage(vm);
	}
}
