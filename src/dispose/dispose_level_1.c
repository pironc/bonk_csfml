/*
** EPITECH PROJECT, 2020
** dispose_level_1
** File description:
** function to dispose level 1 resources
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int dispose_level_1(game_s *game, level_1_s *level_1) {
    (void)(game->mode); // to delete, not to get warnings
    sfSprite_destroy(level_1->player_sprite);
    sfTexture_destroy(level_1->bonk_before_texture);
    sfTexture_destroy(level_1->bonk_after_texture);
    sfSoundBuffer_destroy(level_1->bonk_buffer);
    sfSound_destroy(level_1->bonk_sound);
    free(level_1);
    return (0);
}