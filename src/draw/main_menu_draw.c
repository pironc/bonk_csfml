/*
** EPITECH PROJECT, 2020
** draw_sprites
** File description:
** function to draw sprites in the window
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_menu_draw(game_s *game, menu_s *menu) {
    sfRenderWindow_drawSprite(game->window, menu->bg_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->play_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->settings_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, menu->quit_sprite, NULL);
    return (0);
}