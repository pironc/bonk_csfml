/*
** EPITECH PROJECT, 2019
** manage_mouse_click
** File description:
** manage_mouse_click
*/

int my_putstr(char const *str);
int my_put_nbr(int nb);

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>

void manage_mouse_click(sfMouseButtonEvent event)
{
    my_putstr("Mouse x=");
    my_put_nbr(event.x);
    my_putstr(" y=");
    my_put_nbr(event.y);
    my_putstr("\n");
}