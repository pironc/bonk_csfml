/*
** EPITECH PROJECT, 2019
** analyse_events
** File description:
** analyse_events
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Font.h>
#include <stdlib.h>
#include <stdio.h>

void manage_mouse_click(sfMouseButtonEvent event);

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton);
    }
}