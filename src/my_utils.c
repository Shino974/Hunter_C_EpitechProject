/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_utils.c
*/

#include "../include/my_hunter.h"

int hub(all_ecran_t *ecrans, all_accueil_t *accueil, all_music_t *musics)
{
    window_hub(accueil, ecrans);
    sprite_create_text_hub(accueil);
    sprite_create_spr_hub(accueil);
    sprite_set_hub(accueil);
    music(musics);
}

int credits(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics)
{
    window_cre(credit, ecrans);
    sprite_create_text_cre(credit);
    sprite_create_spr_cre(credit);
    sprite_set_cre(credit);
    music2(musics);
}

int gamer(all_ecran_t *ecrans, all_game_t *game ,all_music_t *musics)
{
    window_game(game, ecrans);
    sprite_create_text_game(game);
    sprite_create_spr_game(game);
    sprite_set_game(game);
    music3(musics);
}