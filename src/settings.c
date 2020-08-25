/*
** EPITECH PROJECT, 2020
** settings
** File description:
** function to open settings scene
*/

#include "../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int settings(game_s *game) {
    settings_s *settings = init_settings(game);
    while (game->current_state == 1 && sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack); // Clear screen
        settings_draw(game, settings);
        settings_event_checks(game, settings);
        sfRenderWindow_display(game->window); // Update the window
    }
    dispose_settings(game, settings);
    if (game->resize == 1)
        sfRenderWindow_close(game->window);
    return (0);
}