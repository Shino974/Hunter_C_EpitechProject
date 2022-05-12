/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** struct_cre.h
*/

#ifndef STRUCT_CRE_H_
#define STRUCT_CRE_H_

#include "my_hunter.h"

#define pos_exit_cre (sfVector2f){1200, 10}

typedef struct ecran_credit {
    sfTexture *texture_cre;
    sfSprite *sprite_cre;
} ecran_credit_t;

typedef struct close_credit {
    sfTexture *close_text_cre;
    sfSprite *close_sprite_cre;
} close_credit_t;

#endif