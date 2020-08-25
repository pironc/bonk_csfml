/*
** EPITECH PROJECT, 2020
** draw_sprites
** File description:
** function to draw sprites in the window
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int level_1_draw(game_s *game, level_1_s *level_1) {
    sfRenderWindow_drawSprite(game->window, level_1->player_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, level_1->coin_sprite, NULL);
    return (0);
}