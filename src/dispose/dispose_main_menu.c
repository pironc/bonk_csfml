/*
** EPITECH PROJECT, 2020
** dispose_main_menu
** File description:
** function to dispose main menu resources
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int dispose_main_menu(game_s *game, menu_s *menu) {
    (void)(game->mode); // to delete, not to get warnings
    sfTexture_destroy(menu->bg_texture);
    sfSprite_destroy(menu->bg_sprite);
    sfTexture_destroy(menu->play_texture);
    sfSprite_destroy(menu->play_sprite);
    sfTexture_destroy(menu->settings_texture);
    sfSprite_destroy(menu->settings_sprite);
    sfTexture_destroy(menu->quit_texture);
    sfSprite_destroy(menu->quit_sprite);
    free(menu);
    return (0);
}