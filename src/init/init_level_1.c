/*
** EPITECH PROJECT, 2020
** init_options_menu
** File description:
** function to initialize options menu resources
*/

#include "../../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

level_1_s *init_level_1(game_s *game) {
    (void)(game->mode);
    level_1_s *level_1 = malloc(sizeof(level_1_s));
    level_1->player_sprite = sfSprite_create();
    level_1->bonk_before_texture = sfTexture_createFromFile("assets/bonk_before.png", NULL);
    level_1->bonk_after_texture = sfTexture_createFromFile("assets/bonk_after.png", NULL);
    level_1->coin_sprite = sfSprite_create();
    level_1->coin_texture = sfTexture_createFromFile("assets/coins.png", NULL);
    level_1->bonk_buffer = sfSoundBuffer_createFromFile("assets/bonk.ogg");
    level_1->bonk_sound = sfSound_create();
    sfSound_setBuffer(level_1->bonk_sound, level_1->bonk_buffer);
    level_1->bonk_clicked = 0;
    sfSprite_setScale(level_1->player_sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setTexture(level_1->player_sprite, level_1->bonk_before_texture, sfTrue);
    sfSprite_setTexture(level_1->coin_sprite, level_1->coin_texture, sfTrue);
    level_1->coin_rect = (sfIntRect){0, 0, 16, 16};
    sfSprite_setTextureRect(level_1->coin_sprite, level_1->coin_rect);
    return (level_1);
}