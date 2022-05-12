/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** -h.c
*/

#include "../include/my_hunter.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

void hache(void)
{
    my_putstr("/////////////////////////////////////////////////////////\n");
    my_putstr("The goal of the game is to kill as many bird as possible.\n");
    my_putstr("For this you just have to left-click on the on the birds.\n");
    my_putstr("/////////////////////////////////////////////////////////\n");
    my_putstr("By Shino (Théo TURPIN).             The God Of Unicorn <3\n");
}