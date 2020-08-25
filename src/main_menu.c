/*
** EPITECH PROJECT, 2020
** init_main_menu
** File description:
** function to open main menu scene
*/

#include "../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_menu(game_s *game) {
    menu_s *menu = init_main_menu(game);
    while (game->current_state == 0 && sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack); // Clear screen
        main_menu_draw(game, menu);
        main_menu_event_checks(game, menu);
        sfRenderWindow_display(game->window); // Update the window
    }
    dispose_main_menu(game, menu);
    return (0);
}