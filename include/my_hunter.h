/*
** EPITECH PROJECT, 2020
** My_hunter
** File description:
** my_hunter.h
*/

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Network.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <time.h>
#include "struct_hub.h"
#include "struct_cre.h"
#include "struct_game.h"

#define mode (sfVideoMode){1280, 720, 32}

typedef struct rectangle {
    sfIntRect rect;
} rectangle_t;

typedef struct clok {
    sfClock *cloak;
    sfTime tim;
    float seconds;
} clok_t;

typedef struct all_music {
    sfMusic* music;
    sfMusic *music_cre;
    sfMusic *music_game;
} all_music_t;

typedef struct all_ecran {
    sfRenderWindow *window;
    sfRenderWindow *windowc;
    sfRenderWindow *windowgame;
} all_ecran_t;

typedef struct all_credit {
    ecran_credit_t ec;
    close_credit_t cc;
} all_credit_t;

typedef struct all_accueil {
    ecran_accueil_t ac;
    play_button_t pb;
    exit_button_t eb;
    credit_button_t cb;
    logo_t lg;
} all_accueil_t;

typedef struct all_game {
    ecran_game_t eg;
    oiseau_t os;
} all_game_t;

// Hub
int sprite_create_text_hub (all_accueil_t *accueil);
int sprite_create_spr_hub (all_accueil_t *accueil);
int sprite_set_hub (all_accueil_t *accueil);
int music(all_music_t* musics);
int window_hub(all_accueil_t *accueil, all_ecran_t* ecrans);
int display_hub(all_accueil_t *accueil, all_ecran_t *ecrans);
int destroy_hub (all_accueil_t* accueil, all_ecran_t* ecrans,
    all_music_t* musics);
int hub(all_ecran_t *ecrans, all_accueil_t *accueil, all_music_t *musics);
void unicorn_pos(all_ecran_t *ecrans, all_accueil_t *accueil,
    all_credit_t *credit, all_music_t *musics);
void close_pos(all_ecran_t *ecrans, all_accueil_t *accueil, all_game_t *game,
    all_music_t *musics);
void hache(void);
void accueille(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics,
    sfEvent event, all_game_t *game, all_accueil_t *accueil);
// Crédit
int sprite_create_text_cre(all_credit_t *credit);
int sprite_create_spr_cre(all_credit_t *credit);
int sprite_set_cre (all_credit_t *credit);
int music2(all_music_t *musics);
int window_cre(all_credit_t *credit, all_ecran_t *ecrans);
int display_cre(all_credit_t *credit, all_ecran_t *ecrans);
int destroy_cre(all_credit_t *credit, all_ecran_t *ecrans, all_music_t *musics);
int credits(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics);
void cred(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics);
void x_pos(all_ecran_t *ecrans, all_credit_t *credit, all_music_t *musics);
//Game
int sprite_create_text_game(all_game_t *game);
int sprite_create_spr_game(all_game_t *game);
int sprite_set_game(all_game_t *game);
int music3(all_music_t *musics);
int window_game(all_game_t *game, all_ecran_t *ecrans);
int display_game(all_game_t *game, all_ecran_t* ecrans);
int destroy_game(all_game_t *game, all_ecran_t *ecrans, all_music_t *musics);
int gamer(all_ecran_t *ecrans, all_game_t *game ,all_music_t *musics);
void gam(all_ecran_t *ecrans, all_game_t *game, all_music_t *musics,
    sfEvent event);
void play_pos(all_ecran_t *ecrans, all_accueil_t *accueil, all_game_t *game,
    all_music_t *musics, sfEvent event);
void bird(all_ecran_t *ecrans, all_game_t *game, sfIntRect *rect);
void bird_box(rectangle_t *rec);
int clck(clok_t *temp, all_ecran_t *ecrans, all_game_t *game, sfIntRect *rec);
int anim(void);
void return_rect(all_ecran_t *ecrans, sfIntRect *rect, all_game_t *game);
#endif