/*
** EPITECH PROJECT, 2020
** keypress_check
** File description:
** function to check for keyboard key presses
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_menu_keycheck(game_s *game, menu_s *menu) {
    const sfFloatRect play_floatrect = sfSprite_getGlobalBounds(menu->play_sprite);
    const sfFloatRect settings_floatrect = sfSprite_getGlobalBounds(menu->settings_sprite);
    const sfFloatRect quit_floatrect = sfSprite_getGlobalBounds(menu->quit_sprite);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (sfMouse_isButtonPressed(sfMouseLeft) && sfFloatRect_contains(&play_floatrect, mouse_pos.x, mouse_pos.y)) {
        my_putstr("LMB on PLAY_BTN\n");
        game->current_state = 2;
        return (0);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && sfFloatRect_contains(&settings_floatrect, mouse_pos.x, mouse_pos.y)) {
        my_putstr("LMB on SETTINGS_BTN\n");
        game->current_state = 1;
        return (0);
    }
    if (sfRenderWindow_hasFocus(game->window) && (sfKeyboard_isKeyPressed(sfKeyE) || (sfMouse_isButtonPressed(sfMouseLeft) && sfFloatRect_contains(&quit_floatrect, mouse_pos.x, mouse_pos.y)))) {
        my_putstr("Exiting...\n");
        game->current_state = -1;
        sfRenderWindow_close(game->window); // Close window : exit
        return (0);
    }
    return (0);
}