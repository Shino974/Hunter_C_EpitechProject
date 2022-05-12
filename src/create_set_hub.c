/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** csh.c
*/

#include "../include/my_hunter.h"

int sprite_create_text_hub(all_accueil_t* accueil)
{
    accueil->ac.texture_fd1 =
        sfTexture_createFromFile("./ressources/images/fable3.jpg", NULL);
    if (!accueil->ac.texture_fd1)
        return 1;
    accueil->cb.texture_c =
        sfTexture_createFromFile("./ressources/images/credit.png", NULL);
    if (!accueil->cb.texture_c)
        return 1;
    accueil->pb.texture_pb =
        sfTexture_createFromFile("./ressources/images/Play_b.png", NULL);
    if (!accueil->pb.texture_pb)
        return 1;
    accueil->lg.texture_logo =
        sfTexture_createFromFile("./ressources/images/logo.png", NULL);
    if (!accueil->lg.texture_logo)
        return 1;
    accueil->eb.texture_exit =
        sfTexture_createFromFile("./ressources/images/exit.jpg", NULL);
    if (!accueil->eb.texture_exit)
        return 1;
}

int sprite_create_spr_hub(all_accueil_t* accueil)
{
    accueil->ac.fond1 = sfSprite_create();
    accueil->cb.credit = sfSprite_create();
    accueil->pb.play_b = sfSprite_create();
    accueil->lg.logo = sfSprite_create();
    accueil->eb.exit = sfSprite_create();
}

int sprite_set_hub(all_accueil_t* accueil)
{
    sfSprite_setTexture(accueil->ac.fond1, accueil->ac.texture_fd1, sfTrue);
    sfSprite_setTexture(accueil->cb.credit, accueil->cb.texture_c, sfTrue);
    sfSprite_setTexture(accueil->pb.play_b, accueil->pb.texture_pb, sfTrue);
    sfSprite_setTexture(accueil->lg.logo, accueil->lg.texture_logo, sfTrue);
    sfSprite_setTexture(accueil->eb.exit, accueil->eb.texture_exit, sfTrue);
    sfSprite_scale(accueil->ac.fond1, (sfVector2f){0.80,0.80});
    sfSprite_scale(accueil->cb.credit, (sfVector2f){0.10,0.10});
    sfSprite_scale(accueil->eb.exit, (sfVector2f){0.20, 0.20});
    sfSprite_setPosition(accueil->cb.credit, pos_credit);
    sfSprite_setPosition(accueil->pb.play_b, pos_pb);
    sfSprite_setPosition(accueil->lg.logo, pos_logo);
    sfSprite_setPosition(accueil->eb.exit, pos_exit);
}

int music(all_music_t* musics)
{
    musics->music =
        sfMusic_createFromFile("./ressources/audio/fable-oakvale.ogg");
    if (!musics->music)
        return 1;
    sfMusic_setVolume(musics->music, 100);
    sfMusic_play(musics->music);
    sfMusic_setLoop(musics->music, sfTrue);
}