/*
** EPITECH PROJECT, 2020
** init_main_menu
** File description:
** function to initialize main menu resources
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
        sfIntRect play_rect = {0, 0, 460, 110};
        sfIntRect howtoplay_rect = {1380, 0, 460, 110};
        sfIntRect quit_rect = {5578, 9, 230, 89};
*/

void init_background(menu_s *menu, sfVector2f win_related_scale) {
    menu->bg_texture = sfTexture_createFromFile("assets/menu_background.jpg", NULL);
    menu->bg_sprite = sfSprite_create();
    sfSprite_setTexture(menu->bg_sprite, menu->bg_texture, sfTrue);
    sfSprite_setScale(menu->bg_sprite, win_related_scale);
}

void init_play_button(game_s *game, menu_s *menu, sfVector2f win_related_scale) {
    sfIntRect play_rect = {0, 0, 460, 110};
    menu->play_texture = sfTexture_createFromFile("assets/buttons_main_menu.png", &play_rect);
    menu->play_sprite = sfSprite_create();
    sfSprite_setTexture(menu->play_sprite, menu->play_texture, sfTrue);
    sfSprite_setScale(menu->play_sprite, win_related_scale);
    sfFloatRect play_floatrect = sfSprite_getGlobalBounds(menu->play_sprite);
    sfVector2f play_pos = {game->mode.width / 2 - play_floatrect.width / 2, game->mode.height / 10};
    sfSprite_setPosition(menu->play_sprite, play_pos);
}

void init_settings_button(game_s *game, menu_s *menu, sfVector2f win_related_scale) {
    sfIntRect settings_rect = {2760, 0, 460, 110};
    menu->settings_texture = sfTexture_createFromFile("assets/buttons_main_menu.png", &settings_rect);
    menu->settings_sprite = sfSprite_create();
    sfSprite_setTexture(menu->settings_sprite, menu->settings_texture, sfTrue);
    sfSprite_setScale(menu->settings_sprite, win_related_scale);
    sfFloatRect settings_floatrect = sfSprite_getGlobalBounds(menu->settings_sprite);
    sfVector2f settings_pos = {game->mode.width / 2 - settings_floatrect.width / 2, game->mode.height / 3};
    sfSprite_setPosition(menu->settings_sprite, settings_pos);
}

void init_quit_button(game_s *game, menu_s *menu, sfVector2f win_related_scale) {
    sfIntRect quit_rect = {5635, 0, 230, 110};
    menu->quit_texture = sfTexture_createFromFile("assets/buttons_main_menu.png", &quit_rect);
    menu->quit_sprite = sfSprite_create();
    sfSprite_setTexture(menu->quit_sprite, menu->quit_texture, sfTrue);
    sfSprite_setScale(menu->quit_sprite, win_related_scale);
    sfFloatRect quit_floatrect = sfSprite_getGlobalBounds(menu->quit_sprite);
    sfVector2f quit_pos = {game->mode.width / 2 - quit_floatrect.width / 2, game->mode.height / 1.8};
    sfSprite_setPosition(menu->quit_sprite, quit_pos);
}

menu_s *init_main_menu(game_s *game) {
    menu_s *menu = malloc(sizeof(menu_s));
    sfVector2f win_related_scale = {(float)game->mode.width / 1920, (float)game->mode.height / 1080};

    init_background(menu, win_related_scale);
    init_play_button(game, menu, win_related_scale);
    init_settings_button(game, menu, win_related_scale);
    init_quit_button(game, menu, win_related_scale);
    return (menu);
}