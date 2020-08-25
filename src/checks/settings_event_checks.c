/*
** EPITECH PROJECT, 2020
** settings_event_checks.c
** File description:
** function to check for any event
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int settings_event_checks(game_s *game, settings_s *settings) {
    /* Process events */
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed) {
            sfRenderWindow_close(game->window); // Close window : exit
        }
    }
    settings_keycheck(game, settings);
    return (0);
}