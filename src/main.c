/*
** EPITECH PROJECT, 2019
** csfml tests
** File description:
** csfml tests
*/

#include "../include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int (*game_state[])(game_s *game) = {main_menu, settings, level_1};

int main(void)
{
    my_putstr("[MAIN.C] Beginning of main\n");
    static game_s *game = 0;

    if (game == 0) {
        game = malloc(sizeof(game_s));
        game->mode = (sfVideoMode){800, 450, 32};
        game->resize = 0;
    }

    game->window = sfRenderWindow_create(game->mode, "BONK!", sfClose, NULL);
    if (!game->window)
        return (84);
    sfRenderWindow_setVerticalSyncEnabled(game->window, sfTrue);
    sfRenderWindow_setFramerateLimit(game->window, 144);

    game->current_state = 0;
    game->coin_clock = sfClock_create();
    game->clock = sfClock_create();

    while (sfRenderWindow_isOpen(game->window))
    {
        sfRenderWindow_clear(game->window, sfBlack); // Clear screen
        game_state[game->current_state](game); // Display elements according to current scene
        sfRenderWindow_display(game->window); // Update the window
    }
    if (game->resize == 1) {
        my_putstr("[MAIN.C] Entered game->resize = 1\n");
        game->resize = 0;
        main();
    } else {
        my_putstr("[MAIN.C] Entered dispose(game)\n");
        dispose(game); // Cleanup resources
    }
    return (0);
}