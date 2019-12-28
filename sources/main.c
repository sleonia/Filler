/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 17:34:49 by cyuriko           #+#    #+#             */
/*   Updated: 2019/12/28 08:47:52 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

extern int fd;

void	print_coords(int x, int y)
{
	ft_putnbr(x);
	ft_putchar(' ');
	ft_putnbr(y);
	ft_putchar('\n');
}

int 	main()
{
	t_env	*env;
	
	// remove("sleonia.txt");
	// fd = open("sleonia.txt", O_CREAT);
	// system("chmod 777 sleonia.txt");
	// fd = open("sleonia.txt", O_WRONLY);

	if (!(env = init_env()))
		return (int_error(ERROR_MALLOC));
	if (!(parse_player(env)))
		return (int_error(ERROR_INPUT));
	if (!(parse_plateau(env)))
		return (int_error(ERROR_INPUT));
	read_map(env);
	init_heatmap(env);
	parse_piece(env->piece);
	cropped_map(env->piece);
	// for (size_t k = 0; k < env->piece->height; k++)
	// {
	// 	for (size_t i = 0; i < env->piece->width; i++)
	// 	{
	// 		ft_putnbr_fd(env->piece->piece_map[k][i], fd);
	// 		// ft_putchar_fd(' ', fd);
	// 	}		
	// 	ft_putchar_fd('\n', fd);
	// }
	env->best_x = -1;
	env->best_y = -1;
	if (try_it_out(env))
		print_coords(env->best_x, env->best_y);

// void	print_coords(t_filler *filler)
// {
// 	ft_putnbr(filler->y);
// 	ft_putchar(' ');
// 	ft_putnbr(filler->x);
// 	ft_putchar('\n');
// }
// 	}
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(env->piece->height, fd);
// 	ft_putchar_fd(' ', fd);
// 	ft_putnbr_fd(env->piece->width, fd);
// 	ft_putchar_fd('\n', fd);

// 	ft_putstr_fd("leftmost ", fd);
// 	ft_putnbr_fd(env->piece->leftmost, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putstr_fd("rightmost ", fd);
// 	ft_putnbr_fd(env->piece->rightmost, fd);
// 	ft_putchar_fd('\n', fd);	
// 	ft_putstr_fd("up ", fd);
// 	ft_putnbr_fd(env->piece->up, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putstr_fd("down ", fd);
// 	ft_putnbr_fd(env->piece->down, fd);
// 	while (1) ;
// 	return (0);
// }
}		