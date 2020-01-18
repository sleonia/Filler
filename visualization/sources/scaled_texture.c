/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scaled_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 23:04:52 by sleonia           #+#    #+#             */
/*   Updated: 2020/01/19 01:49:47 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_filler.h"

void	render_texture_man(int x, int y, t_env *env)
{
	SDL_Rect rect;
	SDL_Rect dest;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1000;
	rect.h = 1000;

	dest.x = 0;
	dest.y = 0;
	dest.w = 100;
	dest.h = 100;
	SDL_BlitScaled(env->sdl->player1, &rect, env->sdl->sur, &dest);
}

void	render_texture_robot(int x, int y, t_env *env)
{
	SDL_Rect rect;
	SDL_Rect dest;

	rect.x = 0;
	rect.y = -20;
	rect.w = 1000;
	rect.h = 1000;

	dest.x = 40;
	dest.y = 0;
	dest.w = 200;
	dest.h = 200;
	SDL_BlitScaled(env->sdl->player2, &rect, env->sdl->sur, &dest);
}

void	render_texture_ricardo(int x, int y, t_env *env)
{
	SDL_Rect rect;
	SDL_Rect dest;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1000;
	rect.h = 1000;

	dest.x = 200;
	dest.y = 200;
	dest.w = 300;
	dest.h = 300;
	SDL_BlitScaled(env->sdl->player2, &rect, env->sdl->sur, &dest);
}

void	render_texture_gachi(int x, int y, t_env *env)
{
	SDL_Rect rect;
	SDL_Rect dest;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1000;
	rect.h = 1000;

	dest.x = 0;
	dest.y = 200;
	dest.w = 240;
	dest.h = 240;
	SDL_BlitScaled(env->sdl->player1, &rect, env->sdl->sur, &dest);
}
