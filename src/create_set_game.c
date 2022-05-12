/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_set_game.c
*/

#include "../include/my_hunter.h"

int sprite_create_text_game(all_game_t *game)
{
    game->eg.texture_game =
        sfTexture_createFromFile("./ressources/images/forest.jpg", NULL);
    game->os.texture_oiseau =
        sfTexture_createFromFile("./ressources/images/Sprite.png", NULL);
}

int sprite_create_spr_game(all_game_t *game)
{
    game->eg.sprite_game = sfSprite_create();
    game->os.sprite_oiseau = sfSprite_create();
}

int sprite_set_game(all_game_t *game)
{
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 110;

    sfSprite_setTexture(game->eg.sprite_game, game->eg.texture_game, sfTrue);
    sfSprite_setTexture(game->os.sprite_oiseau,
        game->os.texture_oiseau, sfTrue);
    sfSprite_setTextureRect(game->os.sprite_oiseau, rect);
}

int music3(all_music_t *musics)
{
    musics->music_game =
        sfMusic_createFromFile("./ressources/audio/game_music.ogg");
    if (!musics->music_game)
        return 1;
    sfMusic_setVolume(musics->music_game, 100);
    sfMusic_play(musics->music_game);
    sfMusic_setLoop(musics->music_game, sfTrue);
}