/*
** EPITECH PROJECT, 2020
** level_1_event_checks
** File description:
** function to check for any event
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int level_1_event_checks(game_s *game, level_1_s *level_1) {
    /* Process events */
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed || (sfRenderWindow_hasFocus(game->window) && sfKeyboard_isKeyPressed(sfKeyE))) {
            game->current_state = -1;
            my_putstr("Exiting...\n");
            sfRenderWindow_close(game->window); // Close window : exit
        }
    }
    if (level_1->bonk_clicked == 1) {
        game->elapsed_time = sfClock_getElapsedTime(game->clock);
        printf("%lld\n", game->elapsed_time.microseconds);
        if (game->elapsed_time.microseconds >= 400000) {
            sfSprite_setTexture(level_1->player_sprite, level_1->bonk_before_texture, sfTrue);
            sfClock_restart(game->clock);
            level_1->bonk_clicked = 0;
        }
    }
    game->coin_elapsed_time = sfClock_getElapsedTime(game->coin_clock);
    if (game->coin_elapsed_time.microseconds >= 80000) {
        if (level_1->coin_rect.left < 112) {
            level_1->coin_rect.left += 16;
            sfSprite_setTextureRect(level_1->coin_sprite, level_1->coin_rect);
            game->coin_elapsed_time = sfClock_restart(game->coin_clock);
        } else {
            level_1->coin_rect.left = 0;
            game->coin_elapsed_time = sfClock_restart(game->coin_clock);
        }
    }
    level_1_move(game, level_1);
    level_1_keycheck(game, level_1);
    return (0);
}