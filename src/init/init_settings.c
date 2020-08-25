/*
** EPITECH PROJECT, 2020
** init_settings
** File description:
** function to initialize settings resources
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void init_settings_background(settings_s *settings, sfVector2f win_related_scale) {
    settings->bg_texture = sfTexture_createFromFile("assets/menu_background.jpg", NULL);
    settings->bg_sprite = sfSprite_create();
    sfSprite_setTexture(settings->bg_sprite, settings->bg_texture, sfTrue);
    sfSprite_setScale(settings->bg_sprite, win_related_scale);
}

void init_back_button(settings_s *settings, sfVector2f win_related_scale) {
    settings->back_texture = sfTexture_createFromFile("assets/arrow.png", NULL);
    settings->back_sprite = sfSprite_create();
    sfSprite_setTexture(settings->back_sprite, settings->back_texture, sfTrue);
    sfSprite_setScale(settings->back_sprite, win_related_scale);
    sfVector2f back_pos = {15, 10};
    sfSprite_setPosition(settings->back_sprite, back_pos);
}

settings_s *init_settings(game_s *game) {
    settings_s *settings = malloc(sizeof(settings_s));
    sfVector2f win_related_scale = {(float)game->mode.width / 1920, (float)game->mode.height / 1080};

    init_settings_background(settings, win_related_scale);
    init_back_button(settings, win_related_scale);
    return (settings);
}