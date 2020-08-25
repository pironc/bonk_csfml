/*
** EPITECH PROJECT, 2020
** level_1.c
** File description:
** function to open level 1 scene
*/

#include "../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int level_1(game_s *game) {
    static level_1_s *level_1 = 0;
    if (level_1 == 0)
        level_1 = init_level_1(game);
    while (game->current_state == 2) {
        sfRenderWindow_clear(game->window, sfBlack); // Clear screen
        level_1_draw(game, level_1);
        level_1_event_checks(game, level_1);
        sfRenderWindow_display(game->window); // Update the window
    }
    if (!sfRenderWindow_isOpen(game->window))
        dispose_level_1(game, level_1);
    return (0);
}