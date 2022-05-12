/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_event_bird.c
*/

#include "../include/my_hunter.h"

void bird(all_ecran_t *ecrans, all_game_t *game, sfIntRect *rect)
{
    sfFloatRect bird = sfSprite_getGlobalBounds(game->os.sprite_oiseau);
    if (sfMouse_isButtonPressed(sfMouseLeft))
        if (sfFloatRect_contains(&bird,
        sfMouse_getPositionRenderWindow(ecrans->windowgame).x,
        sfMouse_getPositionRenderWindow(ecrans->windowgame).y) == sfTrue)
        {
            rect->left = - 220;
            sfSprite_setPosition(game->os.sprite_oiseau,
                (sfVector2f){rect->left, rect->top});
        }
}

void return_rect(all_ecran_t *ecrans, sfIntRect *rect, all_game_t *game)
{
    game->eg.test = (sfVideoMode){1280, 720, 32};

    sfVector2f pos_bird = sfSprite_getPosition(game->os.sprite_oiseau);
    if (pos_bird.x > game->eg.test.width) {
        sfSprite_setPosition(game->os.sprite_oiseau, (sfVector2f){-110, 0});
    }
}

/*void random()
{
    srand(NULL);

}*/

int clck(clok_t *temp, all_ecran_t *ecrans, all_game_t *game, sfIntRect *rect)
{
    temp->tim = sfClock_getElapsedTime(temp->cloak);
    temp->seconds = sfTime_asMilliseconds(temp->tim);
    if (temp->seconds >= 250) {
        rect->left += 110;
        if (rect->left > 229) {
            rect->left = 0;
        }
        sfSprite_setTextureRect(game->os.sprite_oiseau, *rect);
        sfClock_restart(temp->cloak);
    }
}