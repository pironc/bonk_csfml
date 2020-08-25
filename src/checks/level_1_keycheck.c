/*
** EPITECH PROJECT, 2020
** level_1_keycheck
** File description:
** function to check for keyboard key presses
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int level_1_keycheck(game_s *game, level_1_s *level_1) {
    sfFloatRect bonk_rect = sfSprite_getGlobalBounds(level_1->player_sprite);
    sfVector2i mousepos = sfMouse_getPositionRenderWindow(game->window);

    if (sfRenderWindow_hasFocus(game->window) && level_1->bonk_clicked == 0 && sfMouse_isButtonPressed(sfMouseLeft) && sfFloatRect_contains(&bonk_rect, mousepos.x, mousepos.y)) {
        my_putstr("LMB on BONK_BEFORE\n");
        sfSound_play(level_1->bonk_sound);
        level_1->bonk_clicked = 1;
        sfSprite_setTexture(level_1->player_sprite, level_1->bonk_after_texture, sfTrue);
        sfClock_restart(game->clock);
    }
    if (sfRenderWindow_hasFocus(game->window) && sfKeyboard_isKeyPressed(sfKeyA)) {
        my_putstr("LMB on KEY_A\n");
        game->current_state = 0;
    }
    return (0);
}