/*
** EPITECH PROJECT, 2020
** settings_keycheck.c
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

int settings_keycheck(game_s *game, settings_s *settings) {
    const sfFloatRect back_floatrect = sfSprite_getGlobalBounds(settings->back_sprite);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (sfMouse_isButtonPressed(sfMouseLeft) && sfFloatRect_contains(&back_floatrect, mouse_pos.x, mouse_pos.y)) {
        my_putstr("LMB on BACK_BTN\n");
        game->current_state = 0;
        return (0);
    }
    if (sfRenderWindow_hasFocus(game->window) && sfKeyboard_isKeyPressed(sfKeyW)) {
        my_putstr("LMB on KEY_W\nVIDEOMODE set to 1600*800\n");
        sfVideoMode new_large_mode = {1600, 800, 32};
        game->mode = new_large_mode;
        game->current_state = -1;
        game->resize = 1;
        sfRenderWindow_close(game->window);
        return (0);
    }
    if (sfRenderWindow_hasFocus(game->window) && sfKeyboard_isKeyPressed(sfKeyC)) {
        my_putstr("LMB on KEY_C\nVIDEOMODE set to 800*450\n");
        sfVideoMode new_small_mode = {800, 450, 32};
        game->mode = new_small_mode;
        game->current_state = -1;
        game->resize = 1;
        sfRenderWindow_close(game->window);
        return (0);
    }
    if (game->event.key.code == sfKeyE) {
        game->current_state = -1;
        my_putstr("Exiting...\n");
        sfRenderWindow_close(game->window); // Close window : exit
    }
    return (0);
}