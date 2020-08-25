/*
** EPITECH PROJECT, 2019
** random duck
** File description:
** random_duck.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int random_duck(int *x, int *y)
{
    *x = -110;
    srand(time(NULL));
    *y = rand() % 950;
}