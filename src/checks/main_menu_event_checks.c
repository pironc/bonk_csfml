/*
** EPITECH PROJECT, 2020
** event_checks
** File description:
** function to check for any event
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_menu_event_checks(game_s *game, menu_s *menu) {
    /* Process events */
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed) {
            sfRenderWindow_close(game->window); // Close window : exit
        }
    }
    main_menu_keycheck(game, menu);
    return (0);
}