/*
** EPITECH PROJECT, 2019
** close_window
** File description:
** close_window
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}