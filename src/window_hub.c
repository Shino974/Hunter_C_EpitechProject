/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_window.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include "../include/my_hunter.h"

int window_hub(all_accueil_t *accueil, all_ecran_t *ecrans)
{
    ecrans->window = sfRenderWindow_create(mode, "Fable Hunter", sfClose, NULL);
    if (!ecrans->window)
        return 1;
}

int display_hub(all_accueil_t* accueil, all_ecran_t* ecrans)
{
    sfRenderWindow_clear(ecrans->window, sfBlack);
    sfRenderWindow_drawSprite(ecrans->window, accueil->ac.fond1, NULL);
    sfRenderWindow_drawSprite(ecrans->window, accueil->cb.credit, NULL);
    sfRenderWindow_drawSprite(ecrans->window, accueil->pb.play_b, NULL);
    sfRenderWindow_drawSprite(ecrans->window, accueil->lg.logo, NULL);
    sfRenderWindow_drawSprite(ecrans->window, accueil->eb.exit, NULL);
    sfRenderWindow_display(ecrans->window);
}

int destroy_hub(all_accueil_t* accueil, all_ecran_t* ecrans,
    all_music_t* musics)
{
    sfSprite_destroy(accueil->ac.fond1);
    sfTexture_destroy(accueil->ac.texture_fd1);
    sfTexture_destroy(accueil->cb.texture_c);
    sfTexture_destroy(accueil->pb.texture_pb);
    sfTexture_destroy(accueil->lg.texture_logo);
    sfTexture_destroy(accueil->eb.texture_exit);
    sfMusic_destroy(musics->music);
    sfRenderWindow_destroy(ecrans->window);
}