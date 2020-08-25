/*
** EPITECH PROJECT, 2020
** dispose
** File description:
** function to dispose all of the elements before closing the window
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int dispose(game_s *game) {
    sfRenderWindow_destroy(game->window);
    free(game);
    return (0);
}