/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** window_game.c
*/

#include "../include/my_hunter.h"

int window_game(all_game_t *game, all_ecran_t *ecrans)
{
    ecrans->windowgame = sfRenderWindow_create(mode, "My_hunter",
        sfClose, NULL);
    if (!ecrans->windowgame)
        return 1;
}

int display_game(all_game_t *game, all_ecran_t* ecrans)
{
    sfRenderWindow_clear(ecrans->windowgame, sfBlack);
    sfRenderWindow_drawSprite(ecrans->windowgame, game->eg.sprite_game, NULL);
    sfRenderWindow_drawSprite(ecrans->windowgame, game->os.sprite_oiseau, NULL);
    sfRenderWindow_display(ecrans->windowgame);
}

int destroy_game(all_game_t *game, all_ecran_t *ecrans, all_music_t *musics)
{
    sfSprite_destroy(game->eg.sprite_game);
    sfSprite_destroy(game->os.sprite_oiseau);
    sfMusic_destroy(musics->music_game);
    sfRenderWindow_destroy(ecrans->windowgame);
}