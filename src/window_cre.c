/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** window_cre.c
*/

#include "../include/my_hunter.h"

int window_cre(all_credit_t *credit, all_ecran_t *ecrans)
{
    ecrans->windowc = sfRenderWindow_create(mode, "Crédit", sfClose, NULL);
    if (!ecrans->windowc)
        return 1;
}

int display_cre(all_credit_t *credit, all_ecran_t *ecrans)
{
    sfRenderWindow_clear(ecrans->windowc, sfBlack);
    sfRenderWindow_drawSprite(ecrans->windowc, credit->ec.sprite_cre, NULL);
    sfRenderWindow_drawSprite(ecrans->windowc,
        credit->cc.close_sprite_cre, NULL);
    sfRenderWindow_display(ecrans->windowc);
}

int destroy_cre(all_credit_t *credit, all_ecran_t *ecrans, all_music_t *musics)
{
    sfSprite_destroy(credit->ec.sprite_cre);
    sfSprite_destroy(credit->cc.close_sprite_cre);
    sfMusic_destroy(musics->music_cre);
    sfRenderWindow_destroy(ecrans->windowc);
}