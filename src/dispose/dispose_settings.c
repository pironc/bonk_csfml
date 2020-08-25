/*
** EPITECH PROJECT, 2020
** dispose_settings
** File description:
** function to dispose settings resources
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int dispose_settings(game_s *game, settings_s *settings) {
    (void)(game->mode); // to delete, not to get warnings
    sfTexture_destroy(settings->bg_texture);
    sfSprite_destroy(settings->bg_sprite);
    sfTexture_destroy(settings->back_texture);
    sfSprite_destroy(settings->back_sprite);
    free(settings);
    return (0);
}