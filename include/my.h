/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

/* Structure declarations */

typedef struct game_t
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    sfFont *font;
    sfText *text;
    sfEvent event;

    enum game_state {MAIN_MENU, SETTINGS, LEVEL_1} current_state;

    int level_1_init;
    int resize;

    sfClock *coin_clock;
    sfTime coin_elapsed_time;

    sfClock *clock;
    sfTime elapsed_time;
}game_s;

typedef struct menu_t
{
    /* Sprites */

    sfSprite *bg_sprite;
    sfSprite *title_sprite;
    sfSprite *play_sprite;
    sfSprite *settings_sprite;
    sfSprite *quit_sprite;

    /* Textures */

    sfTexture *bg_texture;
    sfTexture *title_texture;
    sfTexture *play_texture;
    sfTexture *settings_texture;
    sfTexture *quit_texture;
}menu_s;

typedef struct settings_t
{
    /* Sprites */

    sfSprite *bg_sprite;
    sfSprite *back_sprite;

    /* Textures */

    sfTexture *bg_texture;
    sfTexture *back_texture;

}settings_s;

typedef struct level_1_t
{
    /* Sprites */

    sfSprite *bg_sprite;
    sfSprite *title_sprite;
    sfSprite *player_sprite;
    sfSprite *coin_sprite;

    /* Textures */

    sfTexture *bg_texture;
    sfTexture *title_texture;
    sfTexture *player_texture;
    sfTexture *coin_texture;
    sfTexture *bonk_before_texture;
    sfTexture *bonk_after_texture;

    /* Sounds / Musics */

    sfSoundBuffer *bonk_buffer;
    sfSound *bonk_sound;

    /* Other */

    sfIntRect coin_rect;
    int bonk_clicked;
}level_1_s;

/* Project function declarations */

int main_menu(game_s *game);
int level_1(game_s *game);
int settings(game_s *game);

menu_s *init_main_menu(game_s *game);
level_1_s *init_level_1(game_s *game);
settings_s *init_settings(game_s *game);

int main_menu_event_checks(game_s *game, menu_s *menu);
int level_1_event_checks(game_s *game, level_1_s *level_1);
int settings_event_checks(game_s *game, settings_s *settings);

int main_menu_keycheck(game_s *game, menu_s *menu);
int level_1_keycheck(game_s *game, level_1_s *level_1);
int settings_keycheck(game_s *game, settings_s *settings);

int level_1_move(game_s *game, level_1_s *level_1);

int main_menu_draw(game_s *game, menu_s *menu);
int level_1_draw(game_s *game, level_1_s *level_1);
int settings_draw(game_s *game, settings_s *settings);

int dispose_main_menu(game_s *game, menu_s *menu);
int dispose_level_1(game_s *game, level_1_s *level_1);
int dispose_settings(game_s *game, settings_s *settings);
int dispose(game_s *game);

/* Library function declarations */

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);