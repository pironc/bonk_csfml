/*
** EPITECH PROJECT, 2020
** settings_draw
** File description:
** function to draw settings sprites
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int settings_draw(game_s *game, settings_s *settings) {
    sfRenderWindow_drawSprite(game->window, settings->bg_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, settings->back_sprite, NULL);
    return (0);
}