/*
** EPITECH PROJECT, 2019
** move_rect
** File description:
** move_rect
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= max_value)
        rect->left = 0;
}