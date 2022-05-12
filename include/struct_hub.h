/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** struct.h
*/

#ifndef STRUCT_HUB_H_
#define STRUCT_HUB_H_

#include "my_hunter.h"

#define pos_pb (sfVector2f){500, 500}
#define pos_exit (sfVector2f){1, 677}
#define pos_credit (sfVector2f){1230, 675}
#define pos_logo (sfVector2f){350, 100}

typedef struct ecran_accueil {
    sfTexture* texture_fd1;
    sfSprite* fond1;
} ecran_accueil_t;

typedef struct play_button {
    sfTexture* texture_pb;
    sfSprite* play_b;
} play_button_t;

typedef struct exit_button {
    sfTexture* texture_exit;
    sfSprite* exit;
} exit_button_t;

typedef struct credit_button {
    sfTexture* texture_c;
    sfSprite* credit;
} credit_button_t;

typedef struct logo {
    sfTexture* texture_logo;
    sfSprite* logo;
} logo_t;

#endif