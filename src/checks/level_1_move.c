/*
** EPITECH PROJECT, 2020
** level_1_move
** File description:
** function to check for player movements
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int level_1_move(game_s *game, level_1_s *level_1) {
    sfVector2f curpos = sfSprite_getPosition(level_1->player_sprite);
    sfFloatRect rect = sfSprite_getGlobalBounds(level_1->player_sprite);
    if (sfRenderWindow_hasFocus(game->window) && (sfKeyboard_isKeyPressed(sfKeyUp) || sfKeyboard_isKeyPressed(sfKeyZ))) {
        if (curpos.y >= 0) {
            my_putstr("↑\n");
            sfVector2f pos = {0, -2};
            sfSprite_move(level_1->player_sprite, pos);
        }
    }
    if (sfRenderWindow_hasFocus(game->window) && (sfKeyboard_isKeyPressed(sfKeyDown) || sfKeyboard_isKeyPressed(sfKeyS))) {
        if ((curpos.y + rect.height) <= game->mode.height) {
            my_putstr("↓\n");
            sfVector2f pos = {0, 2};
            sfSprite_move(level_1->player_sprite, pos);
        }
    }
    if (sfRenderWindow_hasFocus(game->window) && (sfKeyboard_isKeyPressed(sfKeyLeft) || sfKeyboard_isKeyPressed(sfKeyQ))) {
        if (curpos.x >= 0) {
            my_putstr("←\n");
            sfVector2f pos = {-2, 0};
            sfSprite_move(level_1->player_sprite, pos);
        }
    }
    if (sfRenderWindow_hasFocus(game->window) && (sfKeyboard_isKeyPressed(sfKeyRight) || sfKeyboard_isKeyPressed(sfKeyD))) {
        if ((curpos.x + rect.width) <= game->mode.width) {
            my_putstr("→\n");
            sfVector2f pos = {2, 0};
            sfSprite_move(level_1->player_sprite, pos);
        }
    }
    return (0);
}