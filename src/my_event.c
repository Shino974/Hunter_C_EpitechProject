/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_event.c
*/

#include "../include/my_hunter.h"

void x_pos(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
	    if (sfMouse_getPositionRenderWindow(ecrans->windowc).x >=
        sfSprite_getGlobalBounds(credit->cc.close_sprite_cre).left &&
        sfMouse_getPositionRenderWindow(ecrans->windowc).x <=
        sfSprite_getGlobalBounds(credit->cc.close_sprite_cre).left + 51 &&
        sfMouse_getPositionRenderWindow(ecrans->windowc).y >=
        sfSprite_getGlobalBounds(credit->cc.close_sprite_cre).top &&
        sfMouse_getPositionRenderWindow(ecrans->windowc).y <=
        sfSprite_getGlobalBounds(credit->cc.close_sprite_cre).top + 51) {
            sfMusic_pause(musics->music);
            sfRenderWindow_close(ecrans->windowc);
        }
    }
}

void unicorn_pos(all_ecran_t *ecrans, all_accueil_t *accueil,
    all_credit_t *credit, all_music_t *musics)
{
    if (sfMouse_getPositionRenderWindow(ecrans->window).x >=
        sfSprite_getGlobalBounds(accueil->cb.credit).left &&
        sfMouse_getPositionRenderWindow(ecrans->window).x <=
        sfSprite_getGlobalBounds(accueil->cb.credit).left + 51 &&
        sfMouse_getPositionRenderWindow(ecrans->window).y >=
        sfSprite_getGlobalBounds(accueil->cb.credit).top &&
        sfMouse_getPositionRenderWindow(ecrans->window).y <=
        sfSprite_getGlobalBounds(accueil->cb.credit).top + 51) {
            sfMusic_pause(musics->music);
            cred(ecrans, credit, musics);
        }
}

void play_pos(all_ecran_t *ecrans, all_accueil_t *accueil, all_game_t *game,
    all_music_t *musics, sfEvent event)
{

    sfFloatRect play_pos = sfSprite_getGlobalBounds(accueil->pb.play_b);
    if (sfMouse_getPositionRenderWindow(ecrans->window).x >= play_pos.left &&
        sfMouse_getPositionRenderWindow(ecrans->window).x <= play_pos.left + 226
        && sfMouse_getPositionRenderWindow(ecrans->window).y >= play_pos.top &&
        sfMouse_getPositionRenderWindow(ecrans->window).y <= play_pos.top + 88)
        {
            sfRenderWindow_close(ecrans->window);
            sfMusic_stop(musics->music);
            gam(ecrans, game, musics, event);
        }
}

void close_pos(all_ecran_t *ecrans, all_accueil_t *accueil, all_game_t *game,
    all_music_t *musics)
{
    sfFloatRect close_pos = sfSprite_getGlobalBounds(accueil->eb.exit);
    if (sfMouse_getPositionRenderWindow(ecrans->window).x >= close_pos.left &&
        sfMouse_getPositionRenderWindow(ecrans->window).x <= close_pos.left + 51
        && sfMouse_getPositionRenderWindow(ecrans->window).y >= close_pos.top &&
        sfMouse_getPositionRenderWindow(ecrans->window).y <= close_pos.top + 51)
        {
            sfRenderWindow_close(ecrans->window);
        }
}