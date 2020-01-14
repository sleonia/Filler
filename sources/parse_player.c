/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 01:20:08 by sleonia           #+#    #+#             */
/*   Updated: 2020/01/14 09:44:55 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

bool		parse_player(t_env *env)
{
	char	*line;

	if (get_next_line(0, &line) != 1)
		return (false);
	if (ft_strcmp(line, PLAYER_1) == 0)
	{
		env->my_symb = PLAYER_2_BIG;
		env->enemy_symb = PLAYER_1_BIG;
	}
	else if (ft_strcmp(line, PLAYER_2) == 0)
	{
		env->my_symb = PLAYER_1_BIG;
		env->enemy_symb = PLAYER_2_BIG;
	}
	else
		return (false);
	ft_strdel(&line);
	return (true);
}
