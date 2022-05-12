/*
** EPITECH PROJECT, 2020
** My_hunter
** File description:
** my_hunter.c
*/

#include "../include/my_hunter.h"

void gam(all_ecran_t *ecrans, all_game_t *game, all_music_t *musics,
    sfEvent event)
{
    clok_t tmp;
    tmp.cloak = sfClock_create();
    sfIntRect rect = {0, 0, 110, 110};

    gamer(ecrans, game, musics);
    while (sfRenderWindow_isOpen(ecrans->windowgame))
    {
        while (sfRenderWindow_pollEvent(ecrans->windowgame, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(ecrans->windowgame);
            }
        display_game(game, ecrans);
        bird(ecrans, game, &rect);
        return_rect(ecrans, &rect, game);
        sfSprite_move(game->os.sprite_oiseau, (sfVector2f){0.80, 0});
        clck(&tmp, ecrans, game, &rect);
    }
    sfClock_destroy(tmp.cloak);
    destroy_game(game, ecrans, musics);
}

void cred(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics)
{
    sfEvent event;

    credits(ecrans, credit, musics);
    while (sfRenderWindow_isOpen(ecrans->windowc))
    {
        while (sfRenderWindow_pollEvent(ecrans->windowc, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(ecrans->windowc);
            x_pos(ecrans, credit, musics);
            }
        display_cre(credit, ecrans);
    }
    sfMusic_play(musics->music);
    destroy_cre(credit, ecrans, musics);
}

void accueille(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics,
    sfEvent event, all_game_t *game, all_accueil_t *accueil)
{
    hub(ecrans, accueil, musics);
        while (sfRenderWindow_isOpen(ecrans->window))
        {
            while (sfRenderWindow_pollEvent(ecrans->window, &event)) {
                if (event.type == sfEvtClosed)
                    sfRenderWindow_close(ecrans->window);
                if (sfMouse_isButtonPressed(sfMouseLeft)) {
                    close_pos(ecrans, accueil, game, musics);
                    play_pos(ecrans, accueil, game, musics, event);
                    unicorn_pos(ecrans, accueil, credit, musics);
                }
            }
            display_hub(accueil, ecrans);
        }
        destroy_hub(accueil, ecrans, musics);
}

int main(int argc, char **argv)
{
    sfEvent event;
    all_music_t *musics = malloc(sizeof(all_music_t));
    all_ecran_t *ecrans = malloc(sizeof(all_ecran_t));
    all_accueil_t *accueil = malloc(sizeof(all_accueil_t));
    all_credit_t *credit = malloc(sizeof(all_credit_t));
    all_game_t *game = malloc(sizeof(all_game_t));

    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'h'
        && argv[1][2] == '\0') {
        hache();
    } else {
        accueille(ecrans, credit, musics, event, game, accueil);
    }
    return 0;
}