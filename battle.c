#include <stdio.h>
#include "battle.h"

void showCharacters(Character characters[], int size){
    printf("\nAvailable Characters:\n");
    for(int i=0;i<size;i++){
        printf("%d - %s (ATK:%d DEF:%d HP:%d)\n",
        i+1, characters[i].name, characters[i].attack,
        characters[i].defense, characters[i].hp);
    }
}

void battle(Character c1, Character c2){
    printf("\nBattle Start! %s vs %s\n", c1.name, c2.name);
    int d1 = (c1.attack - c2.defense > 0) ? c1.attack - c2.defense : 1;
    int d2 = (c2.attack - c1.defense > 0) ? c2.attack - c1.defense : 1;
    c1.hp -= d2; c2.hp -= d1;
    printf("Winner: %s\n", (c1.hp > c2.hp) ? c1.name : (c2.hp > c1.hp ? c2.name : "Draw"));
}