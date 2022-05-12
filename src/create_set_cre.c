/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_set_cre.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include "../include/my_hunter.h"

int sprite_create_text_cre(all_credit_t *credit)
{
    credit->ec.texture_cre =
        sfTexture_createFromFile("./ressources/images/credit_image.jpg", NULL);
    if (!credit->ec.texture_cre)
        return 1;
    credit->cc.close_text_cre =
        sfTexture_createFromFile("./ressources/images/close_cre.png", NULL);
    if (!credit->cc.close_text_cre)
        return 1;
}

int sprite_create_spr_cre(all_credit_t *credit)
{
    credit->ec.sprite_cre = sfSprite_create();
    credit->cc.close_sprite_cre = sfSprite_create();
}

int sprite_set_cre (all_credit_t *credit)
{
    sfSprite_setTexture(credit->ec.sprite_cre, credit->ec.texture_cre, sfTrue);
    sfSprite_setTexture(credit->cc.close_sprite_cre,
        credit->cc.close_text_cre, sfTrue);
    sfSprite_scale(credit->cc.close_sprite_cre, (sfVector2f){0.10,0.10});
    sfSprite_setPosition(credit->cc.close_sprite_cre, pos_exit_cre);
}

int music2(all_music_t *musics)
{
    musics->music_cre =
        sfMusic_createFromFile("./ressources/audio/fable-credits.ogg");
    if (!musics->music_cre)
        return 1;
    sfMusic_setVolume(musics->music_cre, 100);
    sfMusic_play(musics->music_cre);
    sfMusic_setLoop(musics->music_cre, sfTrue);
}