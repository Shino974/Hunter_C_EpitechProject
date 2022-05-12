/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** struct_game.c
*/

#ifndef STRUCT_GAME_H_
#define STRUCT_GAME_H_

#include "my_hunter.h"

typedef struct ecran_game {
    sfTexture *texture_game;
    sfSprite *sprite_game;
    sfVideoMode test;
} ecran_game_t;

typedef struct oiseau {
    sfTexture *texture_oiseau;
    sfSprite *sprite_oiseau;
} oiseau_t;

#endif